cmd_sound/core/snd-hrtimer.ko := ../tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o sound/core/snd-hrtimer.ko sound/core/snd-hrtimer.o sound/core/snd-hrtimer.mod.o