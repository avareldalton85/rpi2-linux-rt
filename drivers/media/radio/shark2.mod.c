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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xd01d57ff, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa4384b21, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0x139372ff, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x23741cd3, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x8b834218, __VMLINUX_SYMBOL_STR(__mutex_do_init) },
	{ 0x287c2331, __VMLINUX_SYMBOL_STR(v4l2_ctrl_log_status) },
	{ 0xa56f7ca4, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xbfc65e92, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x337af589, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0x6b3e609d, __VMLINUX_SYMBOL_STR(__rt_mutex_init) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x96cc1a34, __VMLINUX_SYMBOL_STR(_mutex_unlock) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x8435ccdb, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x24f2dd78, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x1dd88bc0, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x5197cd8d, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf9069b6f, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x7fdf4750, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xe5240ff0, __VMLINUX_SYMBOL_STR(v4l2_fh_release) },
	{ 0x819200e9, __VMLINUX_SYMBOL_STR(v4l2_device_set_name) },
	{ 0xf7525622, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x90ec66b, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0xb6109470, __VMLINUX_SYMBOL_STR(usb_interrupt_msg) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x862516cb, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0x30cc6981, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x9c55cec, __VMLINUX_SYMBOL_STR(schedule_timeout_interruptible) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xed4c54a6, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x43d1951f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x553c36a1, __VMLINUX_SYMBOL_STR(_mutex_lock) },
	{ 0x5d61332, __VMLINUX_SYMBOL_STR(v4l2_device_put) },
	{ 0xe37d8aa8, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x6d4dc7d0, __VMLINUX_SYMBOL_STR(v4l2_ctrl_poll) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev";

MODULE_ALIAS("usb:v077Dp627Ad0010dc*dsc*dp*ic03isc*ip*in*");

MODULE_INFO(srcversion, "F2B19A297EF1BB9544C1FBA");
