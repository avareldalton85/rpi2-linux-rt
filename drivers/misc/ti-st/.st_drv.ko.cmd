cmd_drivers/misc/ti-st/st_drv.ko := ../tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/misc/ti-st/st_drv.ko drivers/misc/ti-st/st_drv.o drivers/misc/ti-st/st_drv.mod.o