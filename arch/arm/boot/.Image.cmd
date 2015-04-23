cmd_arch/arm/boot/Image := ../tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-objcopy -O binary -R .comment -S  vmlinux arch/arm/boot/Image
