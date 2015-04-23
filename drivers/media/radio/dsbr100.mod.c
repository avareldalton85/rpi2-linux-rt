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
	{ 0xa4384b21, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0x7fdf4750, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0x287c2331, __VMLINUX_SYMBOL_STR(v4l2_ctrl_log_status) },
	{ 0xe5240ff0, __VMLINUX_SYMBOL_STR(v4l2_fh_release) },
	{ 0x862516cb, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0xe37d8aa8, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x6d4dc7d0, __VMLINUX_SYMBOL_STR(v4l2_ctrl_poll) },
	{ 0x5197cd8d, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x43d1951f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x139372ff, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0xd01d57ff, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8435ccdb, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x8b834218, __VMLINUX_SYMBOL_STR(__mutex_do_init) },
	{ 0x6b3e609d, __VMLINUX_SYMBOL_STR(__rt_mutex_init) },
	{ 0x337af589, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0xed4c54a6, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x24f2dd78, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xf7525622, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa56f7ca4, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xbfc65e92, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x5d61332, __VMLINUX_SYMBOL_STR(v4l2_device_put) },
	{ 0x1dd88bc0, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0xf9069b6f, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xf95ad897, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x29df4bc9, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x96cc1a34, __VMLINUX_SYMBOL_STR(_mutex_unlock) },
	{ 0x553c36a1, __VMLINUX_SYMBOL_STR(_mutex_lock) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x18be9363, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x81c0ddfb, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev";

MODULE_ALIAS("usb:v04B4p1002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E96DE1C7522C0430EFA89F5");
