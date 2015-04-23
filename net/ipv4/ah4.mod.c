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
	{ 0xb675efd8, __VMLINUX_SYMBOL_STR(xfrm4_protocol_deregister) },
	{ 0xdb0bcda6, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0x654eaa87, __VMLINUX_SYMBOL_STR(xfrm4_protocol_register) },
	{ 0xbd4004aa, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0x84fe74c2, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0xc6a5ea2, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0xbcbb599, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0xc1cd352a, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0xd01d57ff, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe122af95, __VMLINUX_SYMBOL_STR(xfrm_aalg_get_byname) },
	{ 0x5284bff1, __VMLINUX_SYMBOL_STR(crypto_ahash_setkey) },
	{ 0x179af1fd, __VMLINUX_SYMBOL_STR(crypto_alloc_ahash) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xb6a3ef49, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x64d8a403, __VMLINUX_SYMBOL_STR(xfrm_input_resume) },
	{ 0x183edbbb, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x271d5849, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x35006e3c, __VMLINUX_SYMBOL_STR(xfrm_output_resume) },
	{ 0xec80dffb, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xac937c03, __VMLINUX_SYMBOL_STR(crypto_ahash_digest) },
	{ 0x15b548f6, __VMLINUX_SYMBOL_STR(skb_to_sgvec_nomark) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xaffaf221, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xf568c38f, __VMLINUX_SYMBOL_STR(skb_cow_data) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "6BEBC64BA8537F2B057CB4B");
