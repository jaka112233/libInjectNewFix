APP_ABI := armeabi-v7a arm64-v8a
APP_PLATFORM := android-24
APP_STL := c++_static
ifneq ($(APP_OPTIM), debug)
  $(info APP_OPTIM is $(APP_OPTIM) ...)
  APP_LDFLAGS += -Wl,--strip-all
  APP_CFLAGS  += -fvisibility=hidden -fvisibility-inlines-hidden
  APP_CFLAGS  += -g0 -O3 -fomit-frame-pointer -ffunction-sections -fdata-sections
endif

#APP_THIN_ARCHIVE := true
#APP_PIE         := true

