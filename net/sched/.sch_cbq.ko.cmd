cmd_net/sched/sch_cbq.ko := ../tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o net/sched/sch_cbq.ko net/sched/sch_cbq.o net/sched/sch_cbq.mod.o