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
	{ 0xbfbee82, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x6a7a82bf, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x97ca9a9e, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0x54eddbe4, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x5197cd8d, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x43d1951f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x96cc1a34, __VMLINUX_SYMBOL_STR(_mutex_unlock) },
	{ 0x2552138c, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0x1fbb7c3e, __VMLINUX_SYMBOL_STR(usb_lock_device_for_reset) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0402p5632d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v182Dp207Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0547p2720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0547p2727d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Cp8100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525p9901d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525p2888d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Fp0190d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v049Fp505Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E7Ep1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p07D3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A2d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "2F553B52E4C92E18D27EEA9");
