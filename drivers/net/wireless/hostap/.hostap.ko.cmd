cmd_drivers/net/wireless/hostap/hostap.ko := ../tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/net/wireless/hostap/hostap.ko drivers/net/wireless/hostap/hostap.o drivers/net/wireless/hostap/hostap.mod.o