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
	{ 0xbb02665d, __VMLINUX_SYMBOL_STR(xt_unregister_targets) },
	{ 0x89c1ddf7, __VMLINUX_SYMBOL_STR(xt_register_targets) },
	{ 0xe7f9e368, __VMLINUX_SYMBOL_STR(nf_log_packet) },
	{ 0xd1f2eee2, __VMLINUX_SYMBOL_STR(nf_logger_find_get) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb8cd3a7f, __VMLINUX_SYMBOL_STR(nf_logger_put) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables";


MODULE_INFO(srcversion, "83ACDACB2C54EEE5120A64E");