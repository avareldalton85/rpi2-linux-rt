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
	{ 0x183edbbb, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x271d5849, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xec80dffb, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xac937c03, __VMLINUX_SYMBOL_STR(crypto_ahash_digest) },
	{ 0x15b548f6, __VMLINUX_SYMBOL_STR(skb_to_sgvec_nomark) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xaffaf221, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xf568c38f, __VMLINUX_SYMBOL_STR(skb_cow_data) },
	{ 0xa20ce1b8, __VMLINUX_SYMBOL_STR(net_msg_warn) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x567f0495, __VMLINUX_SYMBOL_STR(ip6_redirect) },
	{ 0xc6a5ea2, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0x85b7faae, __VMLINUX_SYMBOL_STR(ip6_update_pmtu) },
	{ 0xc1cd352a, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0xd01d57ff, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe122af95, __VMLINUX_SYMBOL_STR(xfrm_aalg_get_byname) },
	{ 0x5284bff1, __VMLINUX_SYMBOL_STR(crypto_ahash_setkey) },
	{ 0x179af1fd, __VMLINUX_SYMBOL_STR(crypto_alloc_ahash) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xb6a3ef49, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x64d8a403, __VMLINUX_SYMBOL_STR(xfrm_input_resume) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x35006e3c, __VMLINUX_SYMBOL_STR(xfrm_output_resume) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipv6";


MODULE_INFO(srcversion, "BE405EE8570F5F76DA99D2C");
