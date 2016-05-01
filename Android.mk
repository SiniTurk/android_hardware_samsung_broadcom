#Enables the listed display HAL modules
#libs to be built for QCOM targets only

ifeq ($(TARGET_BROADCOM_DISPLAY_VARIANT),true)
display-hals += libhwcomposer
display-hals += libgralloc
#display-hals := libgralloc libgenlock libcopybit
#display-hals += libhwcomposer liboverlay libqdutils
#display-hals += libtilerenderer

ifneq ($(TARGET_PROVIDES_LIBLIGHTS),true)
display-hals += liblight
endif

include $(call all-named-subdir-makefiles,$(display-hals))
endif

ifneq ($(TARGET_PROVIDES_LIBRIL),true)
ril-hals += libril
include $(call all-named-subdir-makefiles,$(ril-hals))
endif

ifneq ($(TARGET_PROVIDES_LIBCAMERA),true)
camera-hals += libcamera
include $(call all-named-subdir-makefiles,$(camera-hals))
endif


