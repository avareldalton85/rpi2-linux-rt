cmd_net/wimax/wimax.ko := ../tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o net/wimax/wimax.ko net/wimax/wimax.o net/wimax/wimax.mod.o