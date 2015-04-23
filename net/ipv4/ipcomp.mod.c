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
	{ 0x15b46f60, __VMLINUX_SYMBOL_STR(xfrm_input) },
	{ 0xf166983b, __VMLINUX_SYMBOL_STR(xfrm4_rcv) },
	{ 0x3bd558bc, __VMLINUX_SYMBOL_STR(ipcomp_output) },
	{ 0xcd1b9609, __VMLINUX_SYMBOL_STR(ipcomp_input) },
	{ 0xd6894569, __VMLINUX_SYMBOL_STR(ipcomp_destroy) },
	{ 0xb675efd8, __VMLINUX_SYMBOL_STR(xfrm4_protocol_deregister) },
	{ 0xdb0bcda6, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0x654eaa87, __VMLINUX_SYMBOL_STR(xfrm4_protocol_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbd4004aa, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0x3a54089b, __VMLINUX_SYMBOL_STR(xfrm_state_insert) },
	{ 0xc79db4b5, __VMLINUX_SYMBOL_STR(xfrm_init_state) },
	{ 0xf514e141, __VMLINUX_SYMBOL_STR(xfrm_state_alloc) },
	{ 0xfe852116, __VMLINUX_SYMBOL_STR(ipcomp_init_state) },
	{ 0x84fe74c2, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0xc6a5ea2, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0xbcbb599, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0xc1cd352a, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xfrm_ipcomp";


MODULE_INFO(srcversion, "E5D4B87B2B20507D95944A4");
