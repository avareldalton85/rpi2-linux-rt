cmd_sound/core/seq/snd-seq-dummy.ko := ../tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o sound/core/seq/snd-seq-dummy.ko sound/core/seq/snd-seq-dummy.o sound/core/seq/snd-seq-dummy.mod.o