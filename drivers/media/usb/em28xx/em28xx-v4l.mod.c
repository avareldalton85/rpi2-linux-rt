#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xb95b937f, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xe02e7070, __VMLINUX_SYMBOL_STR(vb2_ioctl_reqbufs) },
	{ 0xf161488, __VMLINUX_SYMBOL_STR(em28xx_read_reg) },
	{ 0xd01d57ff, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa4384b21, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0x4d7272e4, __VMLINUX_SYMBOL_STR(migrate_enable) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x7044d9bd, __VMLINUX_SYMBOL_STR(v4l2_i2c_new_subdev) },
	{ 0xcd75ef7f, __VMLINUX_SYMBOL_STR(em28xx_free_device) },
	{ 0x614dd5a, __VMLINUX_SYMBOL_STR(v4l2_video_std_frame_period) },
	{ 0x8b834218, __VMLINUX_SYMBOL_STR(__mutex_do_init) },
	{ 0x5dfd3958, __VMLINUX_SYMBOL_STR(em28xx_write_regs) },
	{ 0xe97d9af0, __VMLINUX_SYMBOL_STR(v4l2_ctrl_notify) },
	{ 0xbf16d3f6, __VMLINUX_SYMBOL_STR(em28xx_setup_xc3028) },
	{ 0x90090254, __VMLINUX_SYMBOL_STR(video_device_release) },
	{ 0xa56f7ca4, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xbfc65e92, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x7fc8652c, __VMLINUX_SYMBOL_STR(em28xx_tuner_callback) },
	{ 0xf2a353ac, __VMLINUX_SYMBOL_STR(v4l2_i2c_tuner_addrs) },
	{ 0x337af589, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0x8fced628, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x6b3e609d, __VMLINUX_SYMBOL_STR(__rt_mutex_init) },
	{ 0x1ce081fd, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0x96cc1a34, __VMLINUX_SYMBOL_STR(_mutex_unlock) },
	{ 0xceba9911, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0x99c9efd4, __VMLINUX_SYMBOL_STR(em28xx_init_usb_xfer) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x8435ccdb, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x3e5bed92, __VMLINUX_SYMBOL_STR(em28xx_register_extension) },
	{ 0xb859f521, __VMLINUX_SYMBOL_STR(rt_spin_lock) },
	{ 0x3c73e696, __VMLINUX_SYMBOL_STR(rt_spin_unlock) },
	{ 0x24f2dd78, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xe7c55c19, __VMLINUX_SYMBOL_STR(vb2_fop_read) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x1dd88bc0, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0x9b86e854, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0xa1eeb842, __VMLINUX_SYMBOL_STR(video_device_alloc) },
	{ 0x5611d29d, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0x115ee58c, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf9069b6f, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xb514d72b, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x7fdf4750, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0xb23df32a, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0xfa84d601, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0xbe32580c, __VMLINUX_SYMBOL_STR(em28xx_unregister_extension) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x897d3d2e, __VMLINUX_SYMBOL_STR(vb2_ioctl_prepare_buf) },
	{ 0x9a477c65, __VMLINUX_SYMBOL_STR(em28xx_uninit_usb_xfer) },
	{ 0xb75860fb, __VMLINUX_SYMBOL_STR(vb2_ioctl_create_bufs) },
	{ 0x49608959, __VMLINUX_SYMBOL_STR(migrate_disable) },
	{ 0x45487709, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0x123959a1, __VMLINUX_SYMBOL_STR(v4l2_type_names) },
	{ 0x5127d546, __VMLINUX_SYMBOL_STR(v4l2_ctrl_find) },
	{ 0xf5ef842e, __VMLINUX_SYMBOL_STR(v4l_bound_align_image) },
	{ 0xf0d34f38, __VMLINUX_SYMBOL_STR(vb2_fop_release) },
	{ 0xf7525622, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xd7758493, __VMLINUX_SYMBOL_STR(em28xx_audio_setup) },
	{ 0xaf8ce441, __VMLINUX_SYMBOL_STR(v4l2_clk_unregister_fixed) },
	{ 0x90ec66b, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0xa678fd7d, __VMLINUX_SYMBOL_STR(v4l2_i2c_subdev_addr) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x862516cb, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0x2f0c1b95, __VMLINUX_SYMBOL_STR(em28xx_set_mode) },
	{ 0x20cbaa81, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1f54e93d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xed4c54a6, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x23c29f8d, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0x64b59541, __VMLINUX_SYMBOL_STR(em28xx_stop_urbs) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x2e103c64, __VMLINUX_SYMBOL_STR(em28xx_write_reg) },
	{ 0x553c36a1, __VMLINUX_SYMBOL_STR(_mutex_lock) },
	{ 0xefc45bd8, __VMLINUX_SYMBOL_STR(em28xx_audio_analog_set) },
	{ 0x968f1597, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0xe37d8aa8, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0xbf562cb0, __VMLINUX_SYMBOL_STR(_mutex_lock_interruptible) },
	{ 0x6d578f78, __VMLINUX_SYMBOL_STR(em28xx_boards) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x50ab6095, __VMLINUX_SYMBOL_STR(em28xx_init_camera) },
	{ 0x466c097e, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-core,em28xx,videodev,v4l2-common,videobuf2-vmalloc";


MODULE_INFO(srcversion, "E20867A290837AD82737E40");
