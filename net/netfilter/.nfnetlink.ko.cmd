cmd_net/netfilter/nfnetlink.ko := ../tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o net/netfilter/nfnetlink.ko net/netfilter/nfnetlink.o net/netfilter/nfnetlink.mod.o