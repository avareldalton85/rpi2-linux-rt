cmd_drivers/input/serio/serio.ko := ../tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/input/serio/serio.ko drivers/input/serio/serio.o drivers/input/serio/serio.mod.o