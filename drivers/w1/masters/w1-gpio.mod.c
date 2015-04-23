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
	{ 0x61b4d0e4, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x9085f0ac, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xcf63a53d, __VMLINUX_SYMBOL_STR(gpiod_get_raw_value) },
	{ 0xa20f3ffa, __VMLINUX_SYMBOL_STR(of_allnodes) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb7143be9, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0x4bd36a0d, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xff411df, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0x18be9363, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x33b87ef, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0x550a4e76, __VMLINUX_SYMBOL_STR(gpiod_direction_output_raw) },
	{ 0x2c8249b5, __VMLINUX_SYMBOL_STR(w1_add_master_device) },
	{ 0x6b30b9f0, __VMLINUX_SYMBOL_STR(gpiod_direction_input) },
	{ 0x111275d6, __VMLINUX_SYMBOL_STR(devm_gpio_request) },
	{ 0x29df4bc9, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xd509d1d5, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xf1fceac2, __VMLINUX_SYMBOL_STR(w1_remove_master_device) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x42ddc6ff, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0xdf2cf4b3, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wire";

MODULE_ALIAS("of:N*T*Cw1-gpio*");

MODULE_INFO(srcversion, "A34E872169561FC2A0A734F");
