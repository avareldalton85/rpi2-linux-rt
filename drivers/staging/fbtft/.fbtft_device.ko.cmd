cmd_drivers/staging/fbtft/fbtft_device.ko := ../tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/staging/fbtft/fbtft_device.ko drivers/staging/fbtft/fbtft_device.o drivers/staging/fbtft/fbtft_device.mod.o