cmd_drivers/net/wireless/libertas/libertas.ko := ../tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/net/wireless/libertas/libertas.ko drivers/net/wireless/libertas/libertas.o drivers/net/wireless/libertas/libertas.mod.o