cmd_drivers/hid/hid-microsoft.ko := ../tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/hid/hid-microsoft.ko drivers/hid/hid-microsoft.o drivers/hid/hid-microsoft.mod.o