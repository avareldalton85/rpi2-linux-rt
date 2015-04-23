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
	{ 0x6eb85693, __VMLINUX_SYMBOL_STR(nf_defrag_ipv6_enable) },
	{ 0x6b6c3d10, __VMLINUX_SYMBOL_STR(nf_defrag_ipv4_enable) },
	{ 0xd87479a1, __VMLINUX_SYMBOL_STR(__inet_lookup_listener) },
	{ 0xd438c43a, __VMLINUX_SYMBOL_STR(__inet_lookup_established) },
	{ 0xdc75586d, __VMLINUX_SYMBOL_STR(udp4_lib_lookup) },
	{ 0xe17e9b8d, __VMLINUX_SYMBOL_STR(tcp_death_row) },
	{ 0xce0f808c, __VMLINUX_SYMBOL_STR(tcp_hashinfo) },
	{ 0xf3a364eb, __VMLINUX_SYMBOL_STR(inet_twsk_deschedule) },
	{ 0x99010246, __VMLINUX_SYMBOL_STR(inet6_lookup_listener) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x5c9fa111, __VMLINUX_SYMBOL_STR(__inet6_lookup_established) },
	{ 0x9d1c44d8, __VMLINUX_SYMBOL_STR(udp6_lib_lookup) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfd15d2f5, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x437af99c, __VMLINUX_SYMBOL_STR(ipv6_find_hdr) },
	{ 0xe9773a9a, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x845f20db, __VMLINUX_SYMBOL_STR(inet_twsk_put) },
	{ 0xf15d89ea, __VMLINUX_SYMBOL_STR(sock_edemux) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,nf_defrag_ipv6,nf_defrag_ipv4,ipv6";


MODULE_INFO(srcversion, "F14F7CD071FD89C40BA4E4E");
