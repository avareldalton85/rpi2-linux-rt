cmd_drivers/usb/serial/f81232.ko := ../tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/usb/serial/f81232.ko drivers/usb/serial/f81232.o drivers/usb/serial/f81232.mod.o