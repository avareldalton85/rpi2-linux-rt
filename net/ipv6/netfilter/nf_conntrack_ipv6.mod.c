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
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x8f10df61, __VMLINUX_SYMBOL_STR(nf_conntrack_in) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xcf1078d6, __VMLINUX_SYMBOL_STR(__nf_ct_refresh_acct) },
	{ 0xc8634acd, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_register) },
	{ 0x6732c44d, __VMLINUX_SYMBOL_STR(nf_ct_get_tuplepr) },
	{ 0x6eb85693, __VMLINUX_SYMBOL_STR(nf_defrag_ipv6_enable) },
	{ 0xac1c6b4a, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x36744310, __VMLINUX_SYMBOL_STR(nf_ct_deliver_cached_events) },
	{ 0xea054b22, __VMLINUX_SYMBOL_STR(nla_policy_len) },
	{ 0xe7f9e368, __VMLINUX_SYMBOL_STR(nf_log_packet) },
	{ 0x851e9494, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_unregister) },
	{ 0x72ea6a79, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x83dd990d, __VMLINUX_SYMBOL_STR(nf_ct_invert_tuple) },
	{ 0x1d937aee, __VMLINUX_SYMBOL_STR(__nf_conntrack_confirm) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x90921d51, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_unregister) },
	{ 0x1e092d9c, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x21b7ef11, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_register) },
	{ 0x7824593f, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_unregister) },
	{ 0xb2464053, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0x527a569c, __VMLINUX_SYMBOL_STR(ipv6_skip_exthdr) },
	{ 0x6e224a7a, __VMLINUX_SYMBOL_STR(need_conntrack) },
	{ 0x9a2a9ca6, __VMLINUX_SYMBOL_STR(nf_unregister_sockopt) },
	{ 0x3b862cef, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_tcp6) },
	{ 0xae5bef97, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_pernet_register) },
	{ 0x2d0909ae, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xfaa80918, __VMLINUX_SYMBOL_STR(nf_ct_seq_adjust) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xb949e5e6, __VMLINUX_SYMBOL_STR(nf_conntrack_untracked) },
	{ 0xe3900d90, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0x70fe8bd4, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_pernet_unregister) },
	{ 0x243838f, __VMLINUX_SYMBOL_STR(nf_register_sockopt) },
	{ 0x36607ed5, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_udp6) },
	{ 0xa2e3b65a, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0xfd15d2f5, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xa703ae31, __VMLINUX_SYMBOL_STR(nf_ip6_checksum) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0xff0c2785, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_register) },
	{ 0xabe74122, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0x5eb73670, __VMLINUX_SYMBOL_STR(__nf_ct_l4proto_find) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_defrag_ipv6,ipv6";


MODULE_INFO(srcversion, "915AE1D990325C855A30D79");
