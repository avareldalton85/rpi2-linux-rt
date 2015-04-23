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
	{ 0x1abcc18e, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xa1f22c42, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xad315804, __VMLINUX_SYMBOL_STR(input_mt_report_pointer_emulation) },
	{ 0x34b51391, __VMLINUX_SYMBOL_STR(input_mt_report_slot_state) },
	{ 0x74471ffe, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x5e1871e1, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x18be9363, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xdc001118, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x70d53e1d, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xff64e64b, __VMLINUX_SYMBOL_STR(input_mt_init_slots) },
	{ 0x556680d4, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0xc80904b6, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0xfe990052, __VMLINUX_SYMBOL_STR(gpio_free) },
	{ 0x6b30b9f0, __VMLINUX_SYMBOL_STR(gpiod_direction_input) },
	{ 0x42ddc6ff, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0x550a4e76, __VMLINUX_SYMBOL_STR(gpiod_direction_output_raw) },
	{ 0xdf2cf4b3, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x47229b5c, __VMLINUX_SYMBOL_STR(gpio_request) },
	{ 0xb7143be9, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0xb71883e5, __VMLINUX_SYMBOL_STR(devm_input_allocate_device) },
	{ 0xd509d1d5, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:egalax_ts");

MODULE_INFO(srcversion, "AF90CFCAD9659343F550452");
