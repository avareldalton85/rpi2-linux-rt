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
	{ 0xb870b280, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0xd01d57ff, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x4d7272e4, __VMLINUX_SYMBOL_STR(migrate_enable) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc996d097, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x7044d9bd, __VMLINUX_SYMBOL_STR(v4l2_i2c_new_subdev) },
	{ 0x8b834218, __VMLINUX_SYMBOL_STR(__mutex_do_init) },
	{ 0x90090254, __VMLINUX_SYMBOL_STR(video_device_release) },
	{ 0xa56f7ca4, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xf2a353ac, __VMLINUX_SYMBOL_STR(v4l2_i2c_tuner_addrs) },
	{ 0x6b3e609d, __VMLINUX_SYMBOL_STR(__rt_mutex_init) },
	{ 0xed3e9df2, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x96cc1a34, __VMLINUX_SYMBOL_STR(_mutex_unlock) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x8435ccdb, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x7e8cd326, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0xb859f521, __VMLINUX_SYMBOL_STR(rt_spin_lock) },
	{ 0x3c73e696, __VMLINUX_SYMBOL_STR(rt_spin_unlock) },
	{ 0x24f2dd78, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x9dfba532, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x1dd88bc0, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0xa1eeb842, __VMLINUX_SYMBOL_STR(video_device_alloc) },
	{ 0x18be9363, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x5197cd8d, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf9069b6f, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xb514d72b, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x81c0ddfb, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xb22f20a5, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x49608959, __VMLINUX_SYMBOL_STR(migrate_disable) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x1885691a, __VMLINUX_SYMBOL_STR(vm_insert_page) },
	{ 0xc7944d35, __VMLINUX_SYMBOL_STR(__rt_spin_lock_init) },
	{ 0xa2f98e2c, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0xa20ab1b7, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0x8a2396a, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x6e20935b, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xf7525622, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xd0b730a8, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xa0b04675, __VMLINUX_SYMBOL_STR(vmalloc_32) },
	{ 0xa678fd7d, __VMLINUX_SYMBOL_STR(v4l2_i2c_subdev_addr) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6e9ef562, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xfee09c47, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x43d1951f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xa8ce6ea4, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x35ab9d30, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0x57e3e35b, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x553c36a1, __VMLINUX_SYMBOL_STR(_mutex_lock) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xe3e878e7, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0xe37d8aa8, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x3cd4e86a, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xbf562cb0, __VMLINUX_SYMBOL_STR(_mutex_lock_interruptible) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=v4l2-common,videodev";

MODULE_ALIAS("usb:v0A6Fp0400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0207d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0208d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0571p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p0400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p2000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p2D00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p2D01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p2101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p3000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p3001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4450d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4550d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D03d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D04d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D12d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D14d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D2Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D2Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D2Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D20d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D21d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D22d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D23d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D24d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D25d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D26d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D27d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D28d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D29d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D30d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D31d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D32d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D34d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D35d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D36d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D37d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D38d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0768p0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D0p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D0p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D0p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D0p0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D0p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07F8p9104d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p010Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0112d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0113d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0210d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0212d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0214d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0419d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2400p4200d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "FFA7516CA7C687E2080451E");
