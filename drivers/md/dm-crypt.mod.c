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
	{ 0xa85f1951, __VMLINUX_SYMBOL_STR(dm_unregister_target) },
	{ 0x55b2bdeb, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xad3b71ad, __VMLINUX_SYMBOL_STR(dm_register_target) },
	{ 0xd0a54ee2, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x64999478, __VMLINUX_SYMBOL_STR(congestion_wait) },
	{ 0x65f68adb, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0x7c27c1ce, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0x251705a, __VMLINUX_SYMBOL_STR(__init_swait_head) },
	{ 0x4c06a631, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xefdd2345, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x3baf571, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0xd985dc99, __VMLINUX_SYMBOL_STR(mempool_free_pages) },
	{ 0x53326531, __VMLINUX_SYMBOL_STR(mempool_alloc_pages) },
	{ 0x6a037cf1, __VMLINUX_SYMBOL_STR(mempool_kfree) },
	{ 0xa05c03df, __VMLINUX_SYMBOL_STR(mempool_kmalloc) },
	{ 0x8a99a016, __VMLINUX_SYMBOL_STR(mempool_free_slab) },
	{ 0x183fa88b, __VMLINUX_SYMBOL_STR(mempool_alloc_slab) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x5eb24829, __VMLINUX_SYMBOL_STR(dm_shift_arg) },
	{ 0xe04f7caa, __VMLINUX_SYMBOL_STR(dm_read_arg_group) },
	{ 0x5d4901a8, __VMLINUX_SYMBOL_STR(dm_get_device) },
	{ 0x6d0f1f89, __VMLINUX_SYMBOL_STR(dm_table_get_mode) },
	{ 0x7bc124d2, __VMLINUX_SYMBOL_STR(bioset_create) },
	{ 0x391dcdd, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0xac5f84ce, __VMLINUX_SYMBOL_STR(crypto_alloc_ablkcipher) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xe386b955, __VMLINUX_SYMBOL_STR(crypto_alloc_base) },
	{ 0xd01d57ff, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x44243075, __VMLINUX_SYMBOL_STR(crypto_alloc_shash) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xec80dffb, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x872e9dc8, __VMLINUX_SYMBOL_STR(pagefault_enable) },
	{ 0x7b72b955, __VMLINUX_SYMBOL_STR(pagefault_disable) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xec1aa6ef, __VMLINUX_SYMBOL_STR(memzero_explicit) },
	{ 0xd4ea918d, __VMLINUX_SYMBOL_STR(crypto_shash_final) },
	{ 0x3e2a6672, __VMLINUX_SYMBOL_STR(crypto_shash_update) },
	{ 0x8810ad5e, __VMLINUX_SYMBOL_STR(crypto_xor) },
	{ 0x8d48c462, __VMLINUX_SYMBOL_STR(dm_put_device) },
	{ 0x3c49712a, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0x91d9f6f4, __VMLINUX_SYMBOL_STR(bioset_free) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb6a3ef49, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xa1c4b71b, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0xefaff573, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xffe6e047, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x60a816ac, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0xc9445bd2, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0xe57e7eca, __VMLINUX_SYMBOL_STR(bio_clone_bioset) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x5a5a94a6, __VMLINUX_SYMBOL_STR(kstrtou8) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-mod";


MODULE_INFO(srcversion, "78717F9892147249796CF27");
