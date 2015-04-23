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
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0xcf3cd25e, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_unregister) },
	{ 0x85768abe, __VMLINUX_SYMBOL_STR(nat_q931_hook) },
	{ 0x1fe5d532, __VMLINUX_SYMBOL_STR(nat_callforwarding_hook) },
	{ 0xff3ace29, __VMLINUX_SYMBOL_STR(nat_h245_hook) },
	{ 0x78ff82cc, __VMLINUX_SYMBOL_STR(nat_t120_hook) },
	{ 0x234f4c65, __VMLINUX_SYMBOL_STR(nat_rtp_rtcp_hook) },
	{ 0x7a7ec37d, __VMLINUX_SYMBOL_STR(set_ras_addr_hook) },
	{ 0x5e00e376, __VMLINUX_SYMBOL_STR(set_sig_addr_hook) },
	{ 0x67f5fe45, __VMLINUX_SYMBOL_STR(set_h225_addr_hook) },
	{ 0x1213e688, __VMLINUX_SYMBOL_STR(set_h245_addr_hook) },
	{ 0xcf83f3e9, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_register) },
	{ 0xa005f817, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0x9fa16dc4, __VMLINUX_SYMBOL_STR(get_h225_addr) },
	{ 0x85f296ba, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0xfd15d2f5, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x6823bd57, __VMLINUX_SYMBOL_STR(__nf_nat_mangle_tcp_packet) },
	{ 0x9f96b3f0, __VMLINUX_SYMBOL_STR(nf_nat_mangle_udp_packet) },
	{ 0xb7af381e, __VMLINUX_SYMBOL_STR(nf_nat_follow_master) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xcc4c200b, __VMLINUX_SYMBOL_STR(nf_nat_setup_info) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_conntrack_h323,nf_nat";


MODULE_INFO(srcversion, "B50D0B221589CC8C4479864");
