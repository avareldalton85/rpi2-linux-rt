cmd_arch/arm/crypto/aesbs-core.o := ../tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-gcc -Wp,-MD,arch/arm/crypto/.aesbs-core.o.d  -nostdinc -isystem /home/xdf-531/Desktop/rtLinux_V2/tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/../lib/gcc/arm-bcm2708hardfp-linux-gnueabi/4.7.1/include -I./arch/arm/include -Iarch/arm/include/generated  -Iinclude -I./arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I./include/uapi -Iinclude/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-bcm2709/include  -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a  -include asm/unified.h -msoft-float        -DMODULE  -c -o arch/arm/crypto/aesbs-core.o arch/arm/crypto/aesbs-core.S

source_arch/arm/crypto/aesbs-core.o := arch/arm/crypto/aesbs-core.S

deps_arch/arm/crypto/aesbs-core.o := \
  arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \

arch/arm/crypto/aesbs-core.o: $(deps_arch/arm/crypto/aesbs-core.o)

$(deps_arch/arm/crypto/aesbs-core.o):
