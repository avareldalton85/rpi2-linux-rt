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
	{ 0x1029d5f3, __VMLINUX_SYMBOL_STR(dibusb_read_eeprom_byte) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x5e2ee4ce, __VMLINUX_SYMBOL_STR(dvb_usb_device_exit) },
	{ 0xde224bfd, __VMLINUX_SYMBOL_STR(dvb_usb_device_init) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x44c0624b, __VMLINUX_SYMBOL_STR(dibusb_pid_filter) },
	{ 0xe5c22ac0, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x5197cd8d, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x559e33e7, __VMLINUX_SYMBOL_STR(dibusb2_0_power_ctrl) },
	{ 0xdeb25f44, __VMLINUX_SYMBOL_STR(dibusb_dib3000mc_frontend_attach) },
	{ 0xf93e247a, __VMLINUX_SYMBOL_STR(dvb_usb_generic_rw) },
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

MODULE_ALIAS("usb:v2040p9300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p9301d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "DB8A5BFD66BFDCED2C327BD");
