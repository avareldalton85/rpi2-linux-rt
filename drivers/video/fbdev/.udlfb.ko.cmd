cmd_drivers/video/fbdev/udlfb.ko := ../tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/video/fbdev/udlfb.ko drivers/video/fbdev/udlfb.o drivers/video/fbdev/udlfb.mod.o