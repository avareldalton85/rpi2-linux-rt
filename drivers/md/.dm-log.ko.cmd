cmd_drivers/md/dm-log.ko := ../tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/md/dm-log.ko drivers/md/dm-log.o drivers/md/dm-log.mod.o