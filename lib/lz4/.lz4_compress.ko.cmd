cmd_lib/lz4/lz4_compress.ko := ../tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o lib/lz4/lz4_compress.ko lib/lz4/lz4_compress.o lib/lz4/lz4_compress.mod.o