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
	{ 0xeb5ac155, __VMLINUX_SYMBOL_STR(xt_unregister_matches) },
	{ 0x89c1ddf7, __VMLINUX_SYMBOL_STR(xt_register_targets) },
	{ 0xf08d8879, __VMLINUX_SYMBOL_STR(xt_register_matches) },
	{ 0xe454c356, __VMLINUX_SYMBOL_STR(ip_set_test) },
	{ 0x1d1d05ec, __VMLINUX_SYMBOL_STR(ip_set_del) },
	{ 0x9b3628c8, __VMLINUX_SYMBOL_STR(ip_set_add) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1ed5d6e0, __VMLINUX_SYMBOL_STR(ip_set_nfnl_get_byindex) },
	{ 0xd3ba5b7b, __VMLINUX_SYMBOL_STR(ip_set_nfnl_put) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,ip_set";


MODULE_INFO(srcversion, "58FBC5A1C4BDEFFEACB33BE");
