cmd_net/sched/em_text.ko := ../tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o net/sched/em_text.ko net/sched/em_text.o net/sched/em_text.mod.o