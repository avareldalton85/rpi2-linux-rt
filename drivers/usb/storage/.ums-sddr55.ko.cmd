cmd_drivers/usb/storage/ums-sddr55.ko := ../tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/usb/storage/ums-sddr55.ko drivers/usb/storage/ums-sddr55.o drivers/usb/storage/ums-sddr55.mod.o