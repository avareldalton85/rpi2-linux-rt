cmd_drivers/clocksource/built-in.o :=  ../tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-ld -EL    -r -o drivers/clocksource/built-in.o drivers/clocksource/clksrc-of.o drivers/clocksource/arm_arch_timer.o drivers/clocksource/dummy_timer.o 