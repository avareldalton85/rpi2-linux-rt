cmd_drivers/bluetooth/btmrvl.ko := ../tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/bluetooth/btmrvl.ko drivers/bluetooth/btmrvl.o drivers/bluetooth/btmrvl.mod.o