cmd_drivers/i2c/i2c-mux.ko := ../tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/i2c/i2c-mux.ko drivers/i2c/i2c-mux.o drivers/i2c/i2c-mux.mod.o