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
	{ 0xb225bf0d, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x1f54e93d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x72ea6a79, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x2d0909ae, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x7ef3329d, __VMLINUX_SYMBOL_STR(ip_vs_conn_in_get) },
	{ 0xe11967cc, __VMLINUX_SYMBOL_STR(skb_make_writable) },
	{ 0x72836c8e, __VMLINUX_SYMBOL_STR(ip_vs_conn_new) },
	{ 0x94a74879, __VMLINUX_SYMBOL_STR(ip_vs_conn_put) },
	{ 0x3f8a0420, __VMLINUX_SYMBOL_STR(ip_vs_tcp_conn_listen) },
	{ 0x901546ff, __VMLINUX_SYMBOL_STR(ip_vs_nfct_expect_related) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x6823bd57, __VMLINUX_SYMBOL_STR(__nf_nat_mangle_tcp_packet) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xae66d001, __VMLINUX_SYMBOL_STR(ip_vs_conn_out_get) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x2aa0e4fc, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x86250237, __VMLINUX_SYMBOL_STR(register_ip_vs_app_inc) },
	{ 0x6cf9cb14, __VMLINUX_SYMBOL_STR(register_ip_vs_app) },
	{ 0xc7a1c33b, __VMLINUX_SYMBOL_STR(unregister_ip_vs_app) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_vs,nf_nat";


MODULE_INFO(srcversion, "A42463C423E27444551A1F4");
