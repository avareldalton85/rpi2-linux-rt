cmd_drivers/hid/hid-zydacron.ko := ../tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/hid/hid-zydacron.ko drivers/hid/hid-zydacron.o drivers/hid/hid-zydacron.mod.o