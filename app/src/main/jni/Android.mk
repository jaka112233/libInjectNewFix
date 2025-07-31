LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE            := libdobby
LOCAL_SRC_FILES         := Dobby/libraries/$(TARGET_ARCH_ABI)/libdobby.a
include $(PREBUILT_STATIC_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE    := main

LOCAL_CFLAGS           := -Wno-error=format-security -fvisibility=hidden -ffunction-sections -fdata-sections -w  -DLOG_TAG=\"undetect\"
LOCAL_CFLAGS           += -fno-rtti -fno-exceptions -fpermissive
LOCAL_CPPFLAGS         := -Wno-error=format-security -fvisibility=hidden -ffunction-sections -fdata-sections -w -Werror -s -std=c++17
LOCAL_CPPFLAGS         += -Wno-error=c++11-narrowing -fms-extensions -fno-rtti -fno-exceptions -fpermissive
LOCAL_LDFLAGS          += -Wl,--gc-sections,--strip-all, -llog
LOCAL_ARM_MODE        := arm
LOCAL_LDLIBS             := -llog -landroid -lEGL -lGLESv2

LOCAL_C_INCLUDES := $(LOCAL_PATH)/ImGui
LOCAL_C_INCLUDES += $(LOCAL_PATH)/ImGui/Font
LOCAL_C_INCLUDES += $(LOCAL_PATH)/ByNameModding
LOCAL_C_INCLUDES += $(LOCAL_PATH)/Dobby
LOCAL_C_INCLUDES += $(LOCAL_PATH)/Includes
LOCAL_C_INCLUDES += $(LOCAL_PATH)/KittyMemory
LOCAL_C_INCLUDES += $(LOCAL_PATH)/Substrate
LOCAL_C_INCLUDES += $(LOCAL_PATH)/And64InlineHook
LOCAL_C_INCLUDES += $(LOCAL_PATH)/


FILE_LIST := $(wildcard $(LOCAL_PATH)/*.c*)
FILE_LIST += $(wildcard $(LOCAL_PATH)/ImGui/*.c*)
FILE_LIST += $(wildcard $(LOCAL_PATH)/ByNameModding/*.c*)
FILE_LIST += $(wildcard $(LOCAL_PATH)/Substrate/*.c*)
FILE_LIST += $(wildcard $(LOCAL_PATH)/And64InlineHook/*.c*)
FILE_LIST += $(wildcard $(LOCAL_PATH)/KittyMemory/*.c*)

LOCAL_SRC_FILES := $(FILE_LIST:$(LOCAL_PATH)/%=%)

LOCAL_STATIC_LIBRARIES := libdobby

include $(BUILD_SHARED_LIBRARY)
