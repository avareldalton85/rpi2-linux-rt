cmd_drivers/char/built-in.o :=  ../tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-ld -EL    -r -o drivers/char/built-in.o drivers/char/mem.o drivers/char/random.o drivers/char/ttyprintk.o drivers/char/misc.o drivers/char/raw.o drivers/char/hw_random/built-in.o drivers/char/agp/built-in.o drivers/char/broadcom/built-in.o 