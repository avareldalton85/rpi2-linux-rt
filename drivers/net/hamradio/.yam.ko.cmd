cmd_drivers/net/hamradio/yam.ko := ../tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/net/hamradio/yam.ko drivers/net/hamradio/yam.o drivers/net/hamradio/yam.mod.o