#Enables the listed display HAL modules
#libs to be built for QCOM targets only

ifeq ($(TARGET_HAWAII_DISPLAY_VARIANT),true)
display-hals += libhwcomposer
display-hals += libgralloc

include $(call all-named-subdir-makefiles,$(display-hals))
endif

ifneq ($(TARGET_HAWAII_LIBRIL),true)
ril-hals += libril
include $(call all-named-subdir-makefiles,$(ril-hals))
endif

ifneq ($(TARGET_HAWAII_LIBCAMERA),true)
camera-hals += libcamera
include $(call all-named-subdir-makefiles,$(camera-hals))
endif

ifneq ($(TARGET_HAWAII_NFC),true)
nfc-hals += nfc
include $(call all-named-subdir-makefiles,$(nfc-hals))
endif


#display-hals := libgralloc libgenlock libcopybit
#display-hals += libhwcomposer liboverlay libqdutils
#display-hals += libtilerenderer

#ifneq ($(TARGET_PROVIDES_LIBLIGHTS),true)
#display-hals += liblight
#endif

