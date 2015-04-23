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
	{ 0x3514ab33, __VMLINUX_SYMBOL_STR(arizona_pm_ops) },
	{ 0x3dc526a9, __VMLINUX_SYMBOL_STR(arizona_of_match) },
	{ 0x1abcc18e, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xa1f22c42, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xb1e13639, __VMLINUX_SYMBOL_STR(wm5102_i2c_regmap) },
	{ 0x3b0b93bd, __VMLINUX_SYMBOL_STR(arizona_dev_init) },
	{ 0x1f8de9a8, __VMLINUX_SYMBOL_STR(devm_regmap_init_i2c) },
	{ 0xd509d1d5, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x18be9363, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xb678f755, __VMLINUX_SYMBOL_STR(arizona_of_get_type) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x32eca2a0, __VMLINUX_SYMBOL_STR(arizona_dev_exit) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=regmap-i2c";

MODULE_ALIAS("i2c:wm5102");
MODULE_ALIAS("i2c:wm5110");
MODULE_ALIAS("i2c:wm8997");

MODULE_INFO(srcversion, "7153438FDF7DC1AB551BE9F");
