cmd_fs/hfsplus/hfsplus.ko := ../tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o fs/hfsplus/hfsplus.ko fs/hfsplus/hfsplus.o fs/hfsplus/hfsplus.mod.o