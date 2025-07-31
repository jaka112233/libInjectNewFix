#ifndef ImGuiAndroid_Drawing
#define ImGuiAndroid_Drawing

#include "../ImGui/imgui_internal.h"

namespace Drawing { 

  void DrawLine(ImVec2 start, ImVec2 end, float thickness, ImColor color) {
     auto background = ImGui::GetBackgroundDrawList();
     if(background) {
       background->AddLine(start, end, color,thickness);
     }
   }
    
   void DrawBox(Rect rect, float thickness, ImColor color) {
        ImVec2 v1(rect.x, rect.y);
        ImVec2 v2(rect.x + rect.width, rect.y);
        ImVec2 v3(rect.x + rect.width, rect.y + rect.height);
        ImVec2 v4(rect.x, rect.y + rect.height);

        DrawLine(v1, v2, thickness, color);
        DrawLine(v2, v3, thickness, color);
        DrawLine(v3, v4, thickness, color);
        DrawLine(v4, v1, thickness, color);
    }

    void DrawCornerBox(ImColor color,float thickness,Rect rect) {
        DrawLine(ImVec2(rect.x, rect.y), ImVec2(rect.x + (rect.width / 3), rect.y), thickness, color);
        DrawLine(ImVec2(rect.x + rect.width, rect.y), ImVec2((rect.x + rect.width) - (rect.width / 3), rect.y), thickness, color);
        DrawLine(ImVec2(rect.x, rect.y + rect.height), ImVec2((rect.x + (rect.width / 3)), rect.y + rect.height), thickness, color);
        DrawLine(ImVec2(rect.x + rect.width, rect.y + rect.height), ImVec2((rect.x + rect.width) - (rect.width / 3), rect.y + rect.height), thickness, color);
        DrawLine(ImVec2(rect.x, rect.y), ImVec2(rect.x, rect.y + (rect.height / 6)), thickness, color);
        DrawLine(ImVec2(rect.x + rect.width, rect.y), ImVec2(rect.x + rect.width, rect.y + (rect.height / 6)), thickness, color);
        DrawLine(ImVec2(rect.x, rect.y + rect.height), ImVec2(rect.x, (rect.y + rect.height) - (rect.height / 6)), thickness, color);
        DrawLine(ImVec2(rect.x + rect.width, rect.y + rect.height), ImVec2(rect.x + rect.width, (rect.y + rect.height) - (rect.height / 6)), thickness, color);             
    }
    
    void DrawText(float fontSize, ImVec2 position, ImColor color, const char *text) {
        auto background = ImGui::GetBackgroundDrawList();
        if(background) {
            background->AddText(NULL, fontSize, position, color, text);
         }
     }     
    
    void DrawCircle(ImVec2 end, float radius, bool filled,int thinkness, ImColor color) {
        auto background = ImGui::GetBackgroundDrawList();

        if(background) {
            if(filled) {
                background->AddCircleFilled(end, radius, color);
            } else {
                background->AddCircle(end, radius, color,100,thinkness);
            }
        }
    }
}

#endif
