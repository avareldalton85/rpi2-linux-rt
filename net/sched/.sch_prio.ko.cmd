cmd_net/sched/sch_prio.ko := ../tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o net/sched/sch_prio.ko net/sched/sch_prio.o net/sched/sch_prio.mod.o