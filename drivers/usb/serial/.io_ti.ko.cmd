cmd_drivers/usb/serial/io_ti.ko := ../tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/usb/serial/io_ti.ko drivers/usb/serial/io_ti.o drivers/usb/serial/io_ti.mod.o