#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xb95b937f, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xc80904b6, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0x31b8d6f4, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc5c5fbd8, __VMLINUX_SYMBOL_STR(i2c_smbus_write_word_data) },
	{ 0xdb521aaf, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x7f1a3edf, __VMLINUX_SYMBOL_STR(regmap_init) },
	{ 0x1f921453, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xc7e9c267, __VMLINUX_SYMBOL_STR(i2c_smbus_read_word_data) },
	{ 0x5c2f804e, __VMLINUX_SYMBOL_STR(devm_regmap_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "2C3396DC66C2129FBEF38CB");
