cmd_drivers/hid/hid-picolcd.ko := ../tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/hid/hid-picolcd.ko drivers/hid/hid-picolcd.o drivers/hid/hid-picolcd.mod.o