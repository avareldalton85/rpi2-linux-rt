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
	{ 0x4c70fd82, __VMLINUX_SYMBOL_STR(xt_unregister_match) },
	{ 0xf63263b5, __VMLINUX_SYMBOL_STR(xt_register_match) },
	{ 0x749d5709, __VMLINUX_SYMBOL_STR(nfnl_acct_overquota) },
	{ 0x635cbf5f, __VMLINUX_SYMBOL_STR(nfnl_acct_update) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x21f6bba6, __VMLINUX_SYMBOL_STR(nfnl_acct_find_get) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xbecf5d14, __VMLINUX_SYMBOL_STR(nfnl_acct_put) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,nfnetlink_acct";


MODULE_INFO(srcversion, "FFB1A26BD1473B78F549CED");
