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
	{ 0xa8da660c, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_in) },
	{ 0xa81b7ca0, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_out) },
	{ 0x4121ba94, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_local_fn) },
	{ 0xa8b8fb57, __VMLINUX_SYMBOL_STR(ipt_do_table) },
	{ 0xa3fe8fb1, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_fn) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc0c0a076, __VMLINUX_SYMBOL_STR(ipt_register_table) },
	{ 0x348a4219, __VMLINUX_SYMBOL_STR(ipt_alloc_initial_table) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ec323a, __VMLINUX_SYMBOL_STR(ipt_unregister_table) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_nat_ipv4,ip_tables";


MODULE_INFO(srcversion, "3ADC2434DA3ECFC45219946");
