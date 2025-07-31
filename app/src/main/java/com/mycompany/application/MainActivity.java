package com.mycompany.application;
import android.app.Activity;
import android.content.Context;
import android.graphics.PixelFormat;
import android.graphics.Point;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.view.Gravity;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewTreeObserver;
import android.view.Window;
import android.widget.LinearLayout;
import android.view.WindowManager;
import com.mycompany.application.GLES3JNIView;
import java.io.InputStream;
import android.view.WindowManager.LayoutParams;
import android.view.Display;
import android.provider.Settings;
import android.widget.Toast;
import android.content.Intent;
import android.Manifest;
import android.net.Uri;
import java.io.IOException;
import java.io.File;
import android.util.Log;
import java.io.InputStream;
import java.io.IOException;
import java.io.FileOutputStream;
import java.io.DataOutputStream;
import android.content.pm.PackageManager;
public class MainActivity extends Activity {
    
    static{
        System.loadLibrary("DarkTeam");
    }
     
    public static WindowManager manager;
    public static  WindowManager.LayoutParams vParams;

    public static  View vTouch;
    public static  WindowManager windowManager,xfqManager;
    
    
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);     
        Start(this);
    }
    
    public static void Start(Context context) {        
        manager = ((Activity) context).getWindowManager();
        vParams = getAttributes(false);
        WindowManager.LayoutParams wParams = getAttributes(true);
        GLES3JNIView display = new GLES3JNIView(context);
        vTouch = new View(context);
        manager.addView(vTouch, vParams);
        manager.addView(display, wParams);

        vTouch.setOnTouchListener(new View.OnTouchListener() {
                @Override
                public boolean onTouch(View v, MotionEvent event) {
                    int action = event.getAction();
                    switch (action) {
                        case MotionEvent.ACTION_MOVE:
                        case MotionEvent.ACTION_DOWN:
                        case MotionEvent.ACTION_UP:
                            GLES3JNIView.MotionEventClick(action != MotionEvent.ACTION_UP, event.getRawX(), event.getRawY());
                            break;
                        default:
                            break;
                    }
                    return false;
                }
            });
        final Handler handler = new Handler();
        handler.postDelayed(new Runnable() {
                @Override
                public void run() {
                    try {
                        String rect[] = GLES3JNIView.getWindowRect().split("\\|");
                        vParams.x = Integer.parseInt(rect[0]);
                        vParams.y = Integer.parseInt(rect[1]);
                        vParams.width = Integer.parseInt(rect[2]);
                        vParams.height = Integer.parseInt(rect[3]);
                        manager.updateViewLayout(vTouch, vParams);
                    } catch (Exception e) {
                    }
                    handler.postDelayed(this, 20);
                }
            }, 20);          
        }
    
    public static WindowManager.LayoutParams getAttributes(boolean isWindow) {
        WindowManager.LayoutParams params =            
        new WindowManager.LayoutParams(
        WindowManager.LayoutParams.WRAP_CONTENT,
        WindowManager.LayoutParams.WRAP_CONTENT,
        0,
        0,
        WindowManager.LayoutParams.TYPE_APPLICATION,
        WindowManager.LayoutParams.FLAG_NOT_FOCUSABLE |
        WindowManager.LayoutParams.FLAG_LAYOUT_IN_OVERSCAN |
        WindowManager.LayoutParams.FLAG_LAYOUT_IN_SCREEN |
        WindowManager.LayoutParams.FLAG_SPLIT_TOUCH,
        PixelFormat.TRANSPARENT);
         
        params.flags = WindowManager.LayoutParams.FLAG_FULLSCREEN | WindowManager.LayoutParams.FLAG_TRANSLUCENT_STATUS | WindowManager.LayoutParams.FLAG_TRANSLUCENT_NAVIGATION | WindowManager.LayoutParams.FLAG_NOT_FOCUSABLE;

        if (isWindow) {
            params.flags |= WindowManager.LayoutParams.FLAG_NOT_TOUCH_MODAL | WindowManager.LayoutParams.FLAG_NOT_TOUCHABLE;
        }
                         
        params.layoutInDisplayCutoutMode = WindowManager.LayoutParams.LAYOUT_IN_DISPLAY_CUTOUT_MODE_SHORT_EDGES;
               
        params.gravity = 51;        
        params.x = 0;
        params.y = 0;
    
        return params;
    }
} 

