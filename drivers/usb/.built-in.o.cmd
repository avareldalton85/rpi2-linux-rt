cmd_drivers/usb/built-in.o :=  ../tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-ld -EL    -r -o drivers/usb/built-in.o drivers/usb/core/built-in.o drivers/usb/host/built-in.o drivers/usb/storage/built-in.o drivers/usb/misc/built-in.o drivers/usb/phy/built-in.o drivers/usb/common/built-in.o 