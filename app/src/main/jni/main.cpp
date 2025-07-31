#include <jni.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <unistd.h>
#include <iostream>
#include <sys/mman.h>
#include <fcntl.h>
#include <unistd.h>

#include "hooks.h"

__attribute__((constructor))
void lib_main() {
    pthread_t ptid;
    pthread_create(&ptid, NULL, hack_thread, NULL);
}

extern "C"
JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *vm, void *reserved) {
    JNIEnv *env;
    if (vm->GetEnv(reinterpret_cast<void **>(&env), JNI_VERSION_1_6) != JNI_OK) {
        return JNI_ERR;
    }
    
    const char *libPath = "librealmain.so";
    
    void *handle = dlopen(libPath, 0);
    if (handle) {
        void *JNI_OnLoad = dlsym(handle, OBFUSCATE("JNI_OnLoad"));
        if (JNI_OnLoad) {
            ((void (*)(JavaVM *, void *)) JNI_OnLoad)(vm, nullptr);
            
    void *sym_input = DobbySymbolResolver(("/system/lib/libinput.so"), ("_ZN7android13InputConsumer21initializeMotionEventEPNS_11MotionEventEPKNS_12InputMessageE")); 
    #ifdef __aarch64__
    void *sym_inputNew = DobbySymbolResolver(("/system/lib/libinput.so"), ("_ZN7android13InputConsumer7consumeEPNS_26InputEventFactoryInterfaceEblPjPPNS_10InputEventE")); 
    #else
    void *sym_inputNew = DobbySymbolResolver(("/system/lib/libinput.so"), ("_ZN7android13InputConsumer7consumeEPNS_26InputEventFactoryInterfaceEbxPjPPNS_10InputEventE"));
     #endif
     
    if (NULL != sym_input && NULL != sym_inputNew){
        DobbyHook((void *)sym_input, (void *) myInput, (void **)&origInput);
        DobbyHook((void *)sym_inputNew, (void *) myInput2, (void **)&origInput2);
        }
      }
    }
    return JNI_VERSION_1_6;
}
