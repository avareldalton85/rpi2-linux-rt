cmd_drivers/dma/built-in.o :=  ../tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-ld -EL    -r -o drivers/dma/built-in.o drivers/dma/dmaengine.o drivers/dma/virt-dma.o drivers/dma/of-dma.o drivers/dma/bcm2708-dmaengine.o drivers/dma/xilinx/built-in.o 