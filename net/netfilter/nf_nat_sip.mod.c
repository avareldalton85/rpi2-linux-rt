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
	{ 0xcf83f3e9, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_register) },
	{ 0x2a377739, __VMLINUX_SYMBOL_STR(nf_nat_sip_hooks) },
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0xcf3cd25e, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_unregister) },
	{ 0xe11967cc, __VMLINUX_SYMBOL_STR(skb_make_writable) },
	{ 0xf50680ed, __VMLINUX_SYMBOL_STR(ct_sip_parse_numerical_param) },
	{ 0x738ce246, __VMLINUX_SYMBOL_STR(ct_sip_parse_address_param) },
	{ 0x94fd26e8, __VMLINUX_SYMBOL_STR(ct_sip_parse_request) },
	{ 0x2aa0e4fc, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0xe3ebbf4a, __VMLINUX_SYMBOL_STR(ct_sip_parse_header_uri) },
	{ 0x59a6826d, __VMLINUX_SYMBOL_STR(nf_ct_seqadj_set) },
	{ 0x75a43658, __VMLINUX_SYMBOL_STR(nf_ct_helper_log) },
	{ 0xa005f817, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0x85f296ba, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x85fee0a0, __VMLINUX_SYMBOL_STR(ct_sip_get_header) },
	{ 0xf0c2143, __VMLINUX_SYMBOL_STR(ct_sip_get_sdp_header) },
	{ 0x6823bd57, __VMLINUX_SYMBOL_STR(__nf_nat_mangle_tcp_packet) },
	{ 0x9f96b3f0, __VMLINUX_SYMBOL_STR(nf_nat_mangle_udp_packet) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xcc4c200b, __VMLINUX_SYMBOL_STR(nf_nat_setup_info) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_conntrack_sip,nf_nat";


MODULE_INFO(srcversion, "FBED88197D6460DDF2CC51B");
