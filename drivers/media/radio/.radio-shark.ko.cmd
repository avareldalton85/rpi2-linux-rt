cmd_drivers/media/radio/radio-shark.ko := ../tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/media/radio/radio-shark.ko drivers/media/radio/radio-shark.o drivers/media/radio/radio-shark.mod.o