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
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc341ae6d, __VMLINUX_SYMBOL_STR(zs_map_object) },
	{ 0x7b72b955, __VMLINUX_SYMBOL_STR(pagefault_disable) },
	{ 0x4d7272e4, __VMLINUX_SYMBOL_STR(migrate_enable) },
	{ 0xb5736a6a, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x61ab0bc5, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x3615401d, __VMLINUX_SYMBOL_STR(blk_queue_io_opt) },
	{ 0xec80dffb, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x27864d57, __VMLINUX_SYMBOL_STR(memparse) },
	{ 0x857327ae, __VMLINUX_SYMBOL_STR(__rt_rwsem_init) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8b834218, __VMLINUX_SYMBOL_STR(__mutex_do_init) },
	{ 0xc69b7ee5, __VMLINUX_SYMBOL_STR(zs_destroy_pool) },
	{ 0xafd4610, __VMLINUX_SYMBOL_STR(zs_malloc) },
	{ 0x6b3e609d, __VMLINUX_SYMBOL_STR(__rt_mutex_init) },
	{ 0x1b2c012f, __VMLINUX_SYMBOL_STR(blk_queue_io_min) },
	{ 0x96cc1a34, __VMLINUX_SYMBOL_STR(_mutex_unlock) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x9dfe7307, __VMLINUX_SYMBOL_STR(lz4_decompress_unknownoutputsize) },
	{ 0x90e9cc0a, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0xbe45a219, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x80a472f5, __VMLINUX_SYMBOL_STR(rt_up_read) },
	{ 0xb859f521, __VMLINUX_SYMBOL_STR(rt_spin_lock) },
	{ 0x9ae8b18b, __VMLINUX_SYMBOL_STR(fsync_bdev) },
	{ 0x3c73e696, __VMLINUX_SYMBOL_STR(rt_spin_unlock) },
	{ 0x958df3ac, __VMLINUX_SYMBOL_STR(zs_free) },
	{ 0x9dfba532, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xfbea6c27, __VMLINUX_SYMBOL_STR(blk_alloc_queue) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1f061b60, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xe2916836, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xedd49930, __VMLINUX_SYMBOL_STR(zs_create_pool) },
	{ 0xcbc5d521, __VMLINUX_SYMBOL_STR(lz4_compress) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0x373db350, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x49608959, __VMLINUX_SYMBOL_STR(migrate_disable) },
	{ 0xb9174c35, __VMLINUX_SYMBOL_STR(rt_down_write) },
	{ 0xffe6e047, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0xc7944d35, __VMLINUX_SYMBOL_STR(__rt_spin_lock_init) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x4d0d163d, __VMLINUX_SYMBOL_STR(copy_page) },
	{ 0xa7bf8b96, __VMLINUX_SYMBOL_STR(blk_queue_make_request) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x9a5d9e82, __VMLINUX_SYMBOL_STR(blk_queue_physical_block_size) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xcc2487f8, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x5ac15bae, __VMLINUX_SYMBOL_STR(kstrtou16) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0xcbe56bc2, __VMLINUX_SYMBOL_STR(zs_get_total_pages) },
	{ 0x599ada5c, __VMLINUX_SYMBOL_STR(rt_up_write) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x6e9ef562, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xfee09c47, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe965ba0f, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0x56b63670, __VMLINUX_SYMBOL_STR(lzo1x_1_compress) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xf30fda27, __VMLINUX_SYMBOL_STR(lzo1x_decompress_safe) },
	{ 0xa8ce6ea4, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x222e7ce2, __VMLINUX_SYMBOL_STR(sysfs_streq) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x553c36a1, __VMLINUX_SYMBOL_STR(_mutex_lock) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x451c1de1, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0x149c7752, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x525ae5aa, __VMLINUX_SYMBOL_STR(bdget_disk) },
	{ 0x872e9dc8, __VMLINUX_SYMBOL_STR(pagefault_enable) },
	{ 0x6cf07d34, __VMLINUX_SYMBOL_STR(bdput) },
	{ 0x924c46f8, __VMLINUX_SYMBOL_STR(zs_unmap_object) },
	{ 0xb9c51b6b, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0xd8db05ff, __VMLINUX_SYMBOL_STR(rt_down_read) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=zsmalloc,lz4_decompress,lz4_compress";


MODULE_INFO(srcversion, "1542949A1A7C4B907307CF8");
