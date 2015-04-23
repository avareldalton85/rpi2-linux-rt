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
	{ 0xe1b18733, __VMLINUX_SYMBOL_STR(usb_altnum_to_altsetting) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x15078299, __VMLINUX_SYMBOL_STR(v4l2_ctrl_g_ctrl) },
	{ 0x337af589, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xa45c59bf, __VMLINUX_SYMBOL_STR(gspca_disconnect) },
	{ 0xd98e03b9, __VMLINUX_SYMBOL_STR(gspca_dev_probe2) },
	{ 0x74471ffe, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x5197cd8d, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb514d72b, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x81c0ddfb, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x7b25f37, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0x14326559, __VMLINUX_SYMBOL_STR(v4l2_ctrl_grab) },
	{ 0x9670af2c, __VMLINUX_SYMBOL_STR(gspca_debug) },
	{ 0x1450e799, __VMLINUX_SYMBOL_STR(gspca_frame_add) },
	{ 0xed4c54a6, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x43d1951f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x71c3cea9, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,gspca_main";

MODULE_ALIAS("usb:v0545p8080d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0545p8080d0002dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0545p8080d030Adc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0545p8080d0301dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0545p8002d030Adc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0545p800Cd030Adc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0545p800Dd030Adc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "44DFE115664CCC9C0DAF566");
