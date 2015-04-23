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
	{ 0x56f05574, __VMLINUX_SYMBOL_STR(xfrm6_protocol_deregister) },
	{ 0xdb0bcda6, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0xce3c0dfd, __VMLINUX_SYMBOL_STR(xfrm6_protocol_register) },
	{ 0xbd4004aa, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0x567f0495, __VMLINUX_SYMBOL_STR(ip6_redirect) },
	{ 0xc6a5ea2, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0x85b7faae, __VMLINUX_SYMBOL_STR(ip6_update_pmtu) },
	{ 0xc1cd352a, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0xe122af95, __VMLINUX_SYMBOL_STR(xfrm_aalg_get_byname) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xda345cde, __VMLINUX_SYMBOL_STR(crypto_aead_setauthsize) },
	{ 0xd0ff151c, __VMLINUX_SYMBOL_STR(crypto_alloc_aead) },
	{ 0xb6a3ef49, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x64d8a403, __VMLINUX_SYMBOL_STR(xfrm_input_resume) },
	{ 0x183edbbb, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xa20ce1b8, __VMLINUX_SYMBOL_STR(net_msg_warn) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x91321ce0, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xfd15d2f5, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x35006e3c, __VMLINUX_SYMBOL_STR(xfrm_output_resume) },
	{ 0xec80dffb, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xefdd2345, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x74d0a94e, __VMLINUX_SYMBOL_STR(skb_to_sgvec) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xaffaf221, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x2176a06e, __VMLINUX_SYMBOL_STR(pskb_put) },
	{ 0xf568c38f, __VMLINUX_SYMBOL_STR(skb_cow_data) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipv6";


MODULE_INFO(srcversion, "80A9C6B4AAEAE1128256AA7");
