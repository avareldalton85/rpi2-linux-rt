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
	{ 0xabaa71a1, __VMLINUX_SYMBOL_STR(nf_log_unregister) },
	{ 0x72ea6a79, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x61f5330f, __VMLINUX_SYMBOL_STR(nf_log_register) },
	{ 0x2d0909ae, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xa9d09347, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x80c68137, __VMLINUX_SYMBOL_STR(nf_log_buf_close) },
	{ 0x76d53a80, __VMLINUX_SYMBOL_STR(nf_log_dump_packet_common) },
	{ 0xd4961de, __VMLINUX_SYMBOL_STR(nf_log_buf_open) },
	{ 0xef2c8e45, __VMLINUX_SYMBOL_STR(nf_log_set) },
	{ 0x6fa8a12d, __VMLINUX_SYMBOL_STR(nf_log_unset) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xbfbe50ab, __VMLINUX_SYMBOL_STR(nf_log_dump_udp_header) },
	{ 0xaab902f8, __VMLINUX_SYMBOL_STR(nf_log_dump_tcp_header) },
	{ 0x6e2f0fc4, __VMLINUX_SYMBOL_STR(nf_log_dump_sk_uid_gid) },
	{ 0xfd15d2f5, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x487c5d33, __VMLINUX_SYMBOL_STR(nf_log_buf_add) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_log_common";


MODULE_INFO(srcversion, "41EA93C7A892F15160B341B");
