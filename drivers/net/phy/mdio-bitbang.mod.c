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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xf7638dce, __VMLINUX_SYMBOL_STR(mdiobus_free) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xba9a0f9b, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xaf9a8fe, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x3a609e84, __VMLINUX_SYMBOL_STR(mdiobus_alloc_size) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libphy";


MODULE_INFO(srcversion, "FE7377DE2B2F1A4CEE0B0BD");
