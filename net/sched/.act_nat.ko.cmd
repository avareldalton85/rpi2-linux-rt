cmd_net/sched/act_nat.ko := ../tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o net/sched/act_nat.ko net/sched/act_nat.o net/sched/act_nat.mod.o