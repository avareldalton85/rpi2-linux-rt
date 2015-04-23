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
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x23c29f8d, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0xceba9911, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0xa4384b21, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0x7fdf4750, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0x287c2331, __VMLINUX_SYMBOL_STR(v4l2_ctrl_log_status) },
	{ 0x968f1597, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0x1ce081fd, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0x45487709, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0x115ee58c, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0x20cbaa81, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0xe02e7070, __VMLINUX_SYMBOL_STR(vb2_ioctl_reqbufs) },
	{ 0xf0d34f38, __VMLINUX_SYMBOL_STR(vb2_fop_release) },
	{ 0x5611d29d, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0xe37d8aa8, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x8fced628, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0xe7c55c19, __VMLINUX_SYMBOL_STR(vb2_fop_read) },
	{ 0x5197cd8d, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x43d1951f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x862516cb, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0x9b86e854, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0xd01d57ff, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xee58e636, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_custom) },
	{ 0x8435ccdb, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x466c097e, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
	{ 0x337af589, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0xed4c54a6, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x24f2dd78, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x2552138c, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0xdd52e418, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x3cd4e86a, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xc7944d35, __VMLINUX_SYMBOL_STR(__rt_spin_lock_init) },
	{ 0x9dfba532, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x6e20935b, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x8b834218, __VMLINUX_SYMBOL_STR(__mutex_do_init) },
	{ 0x6b3e609d, __VMLINUX_SYMBOL_STR(__rt_mutex_init) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xbfc65e92, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0xf9069b6f, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x1dd88bc0, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0xa56f7ca4, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xd0b730a8, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0xeb70c169, __VMLINUX_SYMBOL_STR(rt_mutex_destroy) },
	{ 0xfa6adb64, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x81c0ddfb, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xe3e878e7, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xed3e9df2, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x29df4bc9, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xa8ce6ea4, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xfee09c47, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xc4ff3d67, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x96cc1a34, __VMLINUX_SYMBOL_STR(_mutex_unlock) },
	{ 0xa9530316, __VMLINUX_SYMBOL_STR(__v4l2_ctrl_s_ctrl) },
	{ 0x553c36a1, __VMLINUX_SYMBOL_STR(_mutex_lock) },
	{ 0xf7525622, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xfa84d601, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0xb23df32a, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0x4d7272e4, __VMLINUX_SYMBOL_STR(migrate_enable) },
	{ 0x3c73e696, __VMLINUX_SYMBOL_STR(rt_spin_unlock) },
	{ 0xb859f521, __VMLINUX_SYMBOL_STR(rt_spin_lock) },
	{ 0x49608959, __VMLINUX_SYMBOL_STR(migrate_disable) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x18be9363, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6e9ef562, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x8a2396a, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-core,videodev,videobuf2-vmalloc,v4l2-common";

MODULE_ALIAS("usb:v1943p2255d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1943p2257d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "751F80AFDD5214ADF80925B");
