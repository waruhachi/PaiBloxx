export ARCHS = arm64 arm64e
export TARGET = iphone:16.5:14.0

INSTALL_TARGET_PROCESSES = SpringBoard

SUBPROJECTS += ControlCenter Preferences

include $(THEOS)/makefiles/common.mk
include $(THEOS)/makefiles/aggregate.mk
