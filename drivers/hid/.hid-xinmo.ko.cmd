cmd_drivers/hid/hid-xinmo.ko := ../tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/hid/hid-xinmo.ko drivers/hid/hid-xinmo.o drivers/hid/hid-xinmo.mod.o