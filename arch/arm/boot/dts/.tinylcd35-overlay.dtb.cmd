cmd_arch/arm/boot/dts/tinylcd35-overlay.dtb := ../tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-gcc -E -Wp,-MD,arch/arm/boot/dts/.tinylcd35-overlay.dtb.d.pre.tmp -nostdinc -I./arch/arm/boot/dts -I./arch/arm/boot/dts/include -I./drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.tinylcd35-overlay.dtb.dts.tmp arch/arm/boot/dts/tinylcd35-overlay.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/tinylcd35-overlay.dtb -b 0 -i arch/arm/boot/dts/ -@ -d arch/arm/boot/dts/.tinylcd35-overlay.dtb.d.dtc.tmp arch/arm/boot/dts/.tinylcd35-overlay.dtb.dts.tmp ; cat arch/arm/boot/dts/.tinylcd35-overlay.dtb.d.pre.tmp arch/arm/boot/dts/.tinylcd35-overlay.dtb.d.dtc.tmp > arch/arm/boot/dts/.tinylcd35-overlay.dtb.d

source_arch/arm/boot/dts/tinylcd35-overlay.dtb := arch/arm/boot/dts/tinylcd35-overlay.dts

deps_arch/arm/boot/dts/tinylcd35-overlay.dtb := \

arch/arm/boot/dts/tinylcd35-overlay.dtb: $(deps_arch/arm/boot/dts/tinylcd35-overlay.dtb)

$(deps_arch/arm/boot/dts/tinylcd35-overlay.dtb):
