cmd_drivers/usb/serial/cp210x.ko := ../tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/usb/serial/cp210x.ko drivers/usb/serial/cp210x.o drivers/usb/serial/cp210x.mod.o