cmd_drivers/video/console/built-in.o :=  ../tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-ld -EL    -r -o drivers/video/console/built-in.o drivers/video/console/dummycon.o drivers/video/console/fbcon.o drivers/video/console/bitblit.o drivers/video/console/softcursor.o 