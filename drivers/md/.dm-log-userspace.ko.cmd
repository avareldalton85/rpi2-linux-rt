cmd_drivers/md/dm-log-userspace.ko := ../tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/md/dm-log-userspace.ko drivers/md/dm-log-userspace.o drivers/md/dm-log-userspace.mod.o