cmd_fs/ocfs2/ocfs2_stack_user.ko := ../tools/arm-bcm2708/arm-bcm2708hardfp-linux-gnueabi/bin/arm-bcm2708hardfp-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o fs/ocfs2/ocfs2_stack_user.ko fs/ocfs2/ocfs2_stack_user.o fs/ocfs2/ocfs2_stack_user.mod.o