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
	{ 0x42fb2ee8, __VMLINUX_SYMBOL_STR(xfrm6_rcv) },
	{ 0xb02e8ce5, __VMLINUX_SYMBOL_STR(xfrm6_find_1stfragopt) },
	{ 0x3bd558bc, __VMLINUX_SYMBOL_STR(ipcomp_output) },
	{ 0xcd1b9609, __VMLINUX_SYMBOL_STR(ipcomp_input) },
	{ 0xd6894569, __VMLINUX_SYMBOL_STR(ipcomp_destroy) },
	{ 0x56f05574, __VMLINUX_SYMBOL_STR(xfrm6_protocol_deregister) },
	{ 0xdb0bcda6, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0xce3c0dfd, __VMLINUX_SYMBOL_STR(xfrm6_protocol_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbd4004aa, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0x3a54089b, __VMLINUX_SYMBOL_STR(xfrm_state_insert) },
	{ 0xc79db4b5, __VMLINUX_SYMBOL_STR(xfrm_init_state) },
	{ 0xb5bfb042, __VMLINUX_SYMBOL_STR(xfrm6_tunnel_alloc_spi) },
	{ 0xf514e141, __VMLINUX_SYMBOL_STR(xfrm_state_alloc) },
	{ 0xe581ce73, __VMLINUX_SYMBOL_STR(xfrm6_tunnel_spi_lookup) },
	{ 0xfe852116, __VMLINUX_SYMBOL_STR(ipcomp_init_state) },
	{ 0x567f0495, __VMLINUX_SYMBOL_STR(ip6_redirect) },
	{ 0xc6a5ea2, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0x85b7faae, __VMLINUX_SYMBOL_STR(ip6_update_pmtu) },
	{ 0xc1cd352a, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipv6,xfrm_ipcomp,xfrm6_tunnel";


MODULE_INFO(srcversion, "46C1D87521CE8B31714C7AE");
