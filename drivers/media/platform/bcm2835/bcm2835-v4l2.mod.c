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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xd01d57ff, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa4384b21, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0x4d7272e4, __VMLINUX_SYMBOL_STR(migrate_enable) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x139372ff, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8b834218, __VMLINUX_SYMBOL_STR(__mutex_do_init) },
	{ 0x287c2331, __VMLINUX_SYMBOL_STR(v4l2_ctrl_log_status) },
	{ 0x686df339, __VMLINUX_SYMBOL_STR(vchi_initialise) },
	{ 0xf227e770, __VMLINUX_SYMBOL_STR(vchi_service_open) },
	{ 0xa56f7ca4, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xbfc65e92, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x337af589, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0x8fced628, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0x6b3e609d, __VMLINUX_SYMBOL_STR(__rt_mutex_init) },
	{ 0x1ce081fd, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0x96cc1a34, __VMLINUX_SYMBOL_STR(_mutex_unlock) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x8435ccdb, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x974501cf, __VMLINUX_SYMBOL_STR(vchi_msg_hold) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xb859f521, __VMLINUX_SYMBOL_STR(rt_spin_lock) },
	{ 0x73be3770, __VMLINUX_SYMBOL_STR(vchi_service_use) },
	{ 0x3c73e696, __VMLINUX_SYMBOL_STR(rt_spin_unlock) },
	{ 0x24f2dd78, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xe7c55c19, __VMLINUX_SYMBOL_STR(vb2_fop_read) },
	{ 0x52362185, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std_menu) },
	{ 0x251705a, __VMLINUX_SYMBOL_STR(__init_swait_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x9b86e854, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0x5611d29d, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0x115ee58c, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x44e4c065, __VMLINUX_SYMBOL_STR(vchi_held_msg_release) },
	{ 0xf9069b6f, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x7fdf4750, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0xb23df32a, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0xfa84d601, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x3ca7dbcc, __VMLINUX_SYMBOL_STR(vchi_connect) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x897d3d2e, __VMLINUX_SYMBOL_STR(vb2_ioctl_prepare_buf) },
	{ 0xb75860fb, __VMLINUX_SYMBOL_STR(vb2_ioctl_create_bufs) },
	{ 0x49608959, __VMLINUX_SYMBOL_STR(migrate_disable) },
	{ 0x45487709, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0x48244456, __VMLINUX_SYMBOL_STR(vchi_service_close) },
	{ 0xc7944d35, __VMLINUX_SYMBOL_STR(__rt_spin_lock_init) },
	{ 0x931ef838, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_int_menu) },
	{ 0xf5ef842e, __VMLINUX_SYMBOL_STR(v4l_bound_align_image) },
	{ 0xf0d34f38, __VMLINUX_SYMBOL_STR(vb2_fop_release) },
	{ 0xf7525622, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xe91483a6, __VMLINUX_SYMBOL_STR(v4l2_ctrl_auto_cluster) },
	{ 0x59d29dab, __VMLINUX_SYMBOL_STR(v7_flush_kern_dcache_area) },
	{ 0x2394bc74, __VMLINUX_SYMBOL_STR(vchi_service_release) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x862516cb, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0x20cbaa81, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xed4c54a6, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0xd13b4d69, __VMLINUX_SYMBOL_STR(vchi_msg_queue) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x4c06a631, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x553c36a1, __VMLINUX_SYMBOL_STR(_mutex_lock) },
	{ 0x968f1597, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0x4e9a9f81, __VMLINUX_SYMBOL_STR(vchi_bulk_queue_receive) },
	{ 0x7792392e, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0xe37d8aa8, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0xbf562cb0, __VMLINUX_SYMBOL_STR(_mutex_lock_interruptible) },
	{ 0x466c097e, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-core,videodev,videobuf2-vmalloc,v4l2-common";


MODULE_INFO(srcversion, "A53F05DC7F5805EF1F9152C");
