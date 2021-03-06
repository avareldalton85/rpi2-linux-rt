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
	{ 0xa120d33c, __VMLINUX_SYMBOL_STR(tty_unregister_ldisc) },
	{ 0x89d70e2c, __VMLINUX_SYMBOL_STR(tty_register_ldisc) },
	{ 0x883216c5, __VMLINUX_SYMBOL_STR(n_tty_inherit_ops) },
	{ 0x6e6f17b1, __VMLINUX_SYMBOL_STR(pps_event) },
	{ 0x94eea794, __VMLINUX_SYMBOL_STR(getnstimeofday64) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7f14f271, __VMLINUX_SYMBOL_STR(pps_register_source) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xf4f88152, __VMLINUX_SYMBOL_STR(pps_unregister_source) },
	{ 0x29df4bc9, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x242c662b, __VMLINUX_SYMBOL_STR(pps_lookup_dev) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pps_core";


MODULE_INFO(srcversion, "850CA54771E0E69A4360278");
