cmd_drivers/misc/eeprom/eeprom_93cx6.ko := ../tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/misc/eeprom/eeprom_93cx6.ko drivers/misc/eeprom/eeprom_93cx6.o drivers/misc/eeprom/eeprom_93cx6.mod.o