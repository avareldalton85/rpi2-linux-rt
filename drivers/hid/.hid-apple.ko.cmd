cmd_drivers/hid/hid-apple.ko := ../tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/hid/hid-apple.ko drivers/hid/hid-apple.o drivers/hid/hid-apple.mod.o