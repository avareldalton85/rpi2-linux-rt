cmd_drivers/usb/usbip/vhci-hcd.ko := ../tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/usb/usbip/vhci-hcd.ko drivers/usb/usbip/vhci-hcd.o drivers/usb/usbip/vhci-hcd.mod.o