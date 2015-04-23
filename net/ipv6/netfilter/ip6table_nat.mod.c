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
	{ 0xb2464053, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0x72ea6a79, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0xe3900d90, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0x2d0909ae, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x92409988, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_in) },
	{ 0x4c65f050, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_out) },
	{ 0x5cc54416, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_local_fn) },
	{ 0xd71e3295, __VMLINUX_SYMBOL_STR(ip6t_do_table) },
	{ 0xf34a3139, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_fn) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4ec8a781, __VMLINUX_SYMBOL_STR(ip6t_register_table) },
	{ 0xee65afe5, __VMLINUX_SYMBOL_STR(ip6t_alloc_initial_table) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x3e06cb72, __VMLINUX_SYMBOL_STR(ip6t_unregister_table) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_nat_ipv6,ip6_tables";


MODULE_INFO(srcversion, "F56B12B16E4B7E8F31764D3");
