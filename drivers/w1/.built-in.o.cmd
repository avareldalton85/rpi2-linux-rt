cmd_drivers/w1/built-in.o :=  ../tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-ld -EL    -r -o drivers/w1/built-in.o drivers/w1/masters/built-in.o drivers/w1/slaves/built-in.o 