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
	{ 0xd01d57ff, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xec80dffb, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x3742b89c, __VMLINUX_SYMBOL_STR(crypto_init_ahash_spawn) },
	{ 0x4e91b347, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0x52517767, __VMLINUX_SYMBOL_STR(ahash_attr_alg) },
	{ 0x9a11a0fc, __VMLINUX_SYMBOL_STR(crypto_attr_alg_name) },
	{ 0xeee51b12, __VMLINUX_SYMBOL_STR(crypto_grab_skcipher) },
	{ 0xbb8dfc0a, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x9c6218, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm) },
	{ 0x5c3b0b4d, __VMLINUX_SYMBOL_STR(crypto_aead_type) },
	{ 0x91dda801, __VMLINUX_SYMBOL_STR(scatterwalk_map_and_copy) },
	{ 0xf40b2297, __VMLINUX_SYMBOL_STR(__crypto_memneq) },
	{ 0xac937c03, __VMLINUX_SYMBOL_STR(crypto_ahash_digest) },
	{ 0x9d02959a, __VMLINUX_SYMBOL_STR(crypto_ahash_finup) },
	{ 0xcc0b791c, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0x9a38dbf6, __VMLINUX_SYMBOL_STR(crypto_drop_spawn) },
	{ 0x124f2056, __VMLINUX_SYMBOL_STR(crypto_get_attr_type) },
	{ 0xb6a3ef49, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe8651e68, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm2) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x5284bff1, __VMLINUX_SYMBOL_STR(crypto_ahash_setkey) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "AB64190ACEF819EA9CBBF5C");
