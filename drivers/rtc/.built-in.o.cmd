cmd_drivers/rtc/built-in.o :=  ../tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-ld -EL    -r -o drivers/rtc/built-in.o drivers/rtc/rtc-lib.o drivers/rtc/systohc.o drivers/rtc/rtc-core.o 