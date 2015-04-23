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
	{ 0xc2babf82, __VMLINUX_SYMBOL_STR(crypto_attr_alg2) },
	{ 0xd01d57ff, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x58072166, __VMLINUX_SYMBOL_STR(ahash_register_instance) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x367cfce, __VMLINUX_SYMBOL_STR(shash_attr_alg) },
	{ 0x4e91b347, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0xdc61efbb, __VMLINUX_SYMBOL_STR(crypto_ablkcipher_type) },
	{ 0x4a12cb81, __VMLINUX_SYMBOL_STR(crypto_dequeue_request) },
	{ 0x43ce95e6, __VMLINUX_SYMBOL_STR(shash_ahash_digest) },
	{ 0xbb8dfc0a, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0xd74281a8, __VMLINUX_SYMBOL_STR(crypto_init_spawn) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xd4ea918d, __VMLINUX_SYMBOL_STR(crypto_shash_final) },
	{ 0x9c6218, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm) },
	{ 0x86b0fafc, __VMLINUX_SYMBOL_STR(shash_ahash_finup) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xc917e655, __VMLINUX_SYMBOL_STR(debug_smp_processor_id) },
	{ 0xcc0b791c, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0x3a8e3d2b, __VMLINUX_SYMBOL_STR(crypto_register_instance) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x458185d1, __VMLINUX_SYMBOL_STR(crypto_shash_setkey) },
	{ 0x499043d3, __VMLINUX_SYMBOL_STR(crypto_init_queue) },
	{ 0x9a38dbf6, __VMLINUX_SYMBOL_STR(crypto_drop_spawn) },
	{ 0x124f2056, __VMLINUX_SYMBOL_STR(crypto_get_attr_type) },
	{ 0xa59ceb27, __VMLINUX_SYMBOL_STR(crypto_enqueue_request) },
	{ 0x3ff62317, __VMLINUX_SYMBOL_STR(local_bh_disable) },
	{ 0xd3e6f60d, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0x799aca4, __VMLINUX_SYMBOL_STR(local_bh_enable) },
	{ 0xb6a3ef49, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x2ce98559, __VMLINUX_SYMBOL_STR(kcrypto_wq) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xd0ff151c, __VMLINUX_SYMBOL_STR(crypto_alloc_aead) },
	{ 0xe8651e68, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm2) },
	{ 0xe8a65621, __VMLINUX_SYMBOL_STR(crypto_init_shash_spawn) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x791e28e1, __VMLINUX_SYMBOL_STR(shash_ahash_update) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0xe386b955, __VMLINUX_SYMBOL_STR(crypto_alloc_base) },
	{ 0x179af1fd, __VMLINUX_SYMBOL_STR(crypto_alloc_ahash) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "B5ADA6164D7510E73456C4C");
