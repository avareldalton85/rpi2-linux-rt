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
	{ 0xb47559e0, __VMLINUX_SYMBOL_STR(rc_map_dibusb_table) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x5e2ee4ce, __VMLINUX_SYMBOL_STR(dvb_usb_device_exit) },
	{ 0xde224bfd, __VMLINUX_SYMBOL_STR(dvb_usb_device_init) },
	{ 0xf27a9564, __VMLINUX_SYMBOL_STR(dibusb_rc_query) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x44c0624b, __VMLINUX_SYMBOL_STR(dibusb_pid_filter) },
	{ 0xe5c22ac0, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x5197cd8d, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x559e33e7, __VMLINUX_SYMBOL_STR(dibusb2_0_power_ctrl) },
	{ 0xdeb25f44, __VMLINUX_SYMBOL_STR(dibusb_dib3000mc_frontend_attach) },
	{ 0x1f54e93d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x5a2c3088, __VMLINUX_SYMBOL_STR(dibusb_dib3000mc_tuner_attach) },
	{ 0x3b327f84, __VMLINUX_SYMBOL_STR(dibusb2_0_streaming_ctrl) },
	{ 0x43d1951f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xfb4bb3c6, __VMLINUX_SYMBOL_STR(dibusb_i2c_algo) },
	{ 0x28b3a0eb, __VMLINUX_SYMBOL_STR(dibusb_pid_filter_ctrl) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-usb-dibusb-common,dvb-usb";

MODULE_ALIAS("usb:v10B8p0BC6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p0BC7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p8109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p810Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CApF000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CApF001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1ApE360d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1ApE361d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5032p0BC6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5032p0BC7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p810Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p810Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p6025d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p6026d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B9p5000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B9p5001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8EA7C1B61BEC53088CAEC32");
