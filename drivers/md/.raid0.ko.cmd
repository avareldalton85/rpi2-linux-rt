cmd_drivers/md/raid0.ko := ../tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/md/raid0.ko drivers/md/raid0.o drivers/md/raid0.mod.o