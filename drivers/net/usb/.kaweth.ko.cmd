cmd_drivers/net/usb/kaweth.ko := ../tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/net/usb/kaweth.ko drivers/net/usb/kaweth.o drivers/net/usb/kaweth.mod.o