cmd_drivers/usb/serial/qcaux.ko := ../tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/usb/serial/qcaux.ko drivers/usb/serial/qcaux.o drivers/usb/serial/qcaux.mod.o