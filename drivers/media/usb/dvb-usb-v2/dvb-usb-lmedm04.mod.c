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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xd01d57ff, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xed3e9df2, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x65777efb, __VMLINUX_SYMBOL_STR(usb_reset_configuration) },
	{ 0x96cc1a34, __VMLINUX_SYMBOL_STR(_mutex_unlock) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x25b14265, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xe5c22ac0, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x5197cd8d, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb514d72b, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xe19095f8, __VMLINUX_SYMBOL_STR(dvb_usbv2_probe) },
	{ 0x28f87a81, __VMLINUX_SYMBOL_STR(rc_keydown) },
	{ 0x81c0ddfb, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xb22f20a5, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0x1c8ccca, __VMLINUX_SYMBOL_STR(dvb_usbv2_disconnect) },
	{ 0x8a2396a, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xc4ff3d67, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1f54e93d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x43d1951f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xdd52e418, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x57e3e35b, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x553c36a1, __VMLINUX_SYMBOL_STR(_mutex_lock) },
	{ 0xfa6adb64, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x3cd4e86a, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xbf562cb0, __VMLINUX_SYMBOL_STR(_mutex_lock_interruptible) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-core,dvb_usb_v2,rc-core";

MODULE_ALIAS("usb:v3344p1122d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3344p1120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3344p22F0d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E807C920A25807452939C4A");
