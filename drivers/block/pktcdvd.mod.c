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
	{ 0x206aecdd, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0x37a666db, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0x30934c9f, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x5e03596d, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x2d7fd92f, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xf6581b4e, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x50942c4d, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0xe4efd2e8, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x63f26333, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0x8b834218, __VMLINUX_SYMBOL_STR(__mutex_do_init) },
	{ 0xbd2549a5, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x583db796, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x7c27c1ce, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0x1c5f4bc2, __VMLINUX_SYMBOL_STR(bd_set_size) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xe2916836, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0xb1184c61, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x2111b637, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0xcaa212c3, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0xb99f8fc3, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xe90d2720, __VMLINUX_SYMBOL_STR(__blkdev_driver_ioctl) },
	{ 0xe4bcfd45, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x3baf571, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0xec80dffb, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0x22f5bc24, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0x872e9dc8, __VMLINUX_SYMBOL_STR(pagefault_enable) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x7b72b955, __VMLINUX_SYMBOL_STR(pagefault_disable) },
	{ 0xbd623755, __VMLINUX_SYMBOL_STR(bio_copy_data) },
	{ 0xc9445bd2, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0xece784c2, __VMLINUX_SYMBOL_STR(rb_first) },
	{ 0xf1c676b6, __VMLINUX_SYMBOL_STR(clear_bdi_congested) },
	{ 0x60a816ac, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0xc9891e43, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xfc7558b0, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x9e61bb05, __VMLINUX_SYMBOL_STR(set_freezable) },
	{ 0xfc74818f, __VMLINUX_SYMBOL_STR(set_user_nice) },
	{ 0x81208c9f, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xf7b92740, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x733c3b54, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0x6a037cf1, __VMLINUX_SYMBOL_STR(mempool_kfree) },
	{ 0xa05c03df, __VMLINUX_SYMBOL_STR(mempool_kmalloc) },
	{ 0xba9a0f9b, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x255eb906, __VMLINUX_SYMBOL_STR(blkdev_put) },
	{ 0x271b80a5, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xf5b0606a, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0xc9c75c59, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0xe965ba0f, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0x5d5c1efc, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x6843c593, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x149ed814, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0xc807fb01, __VMLINUX_SYMBOL_STR(blk_queue_merge_bvec) },
	{ 0xf5687b84, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0x451c1de1, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0xa7bf8b96, __VMLINUX_SYMBOL_STR(blk_queue_make_request) },
	{ 0x9acb9883, __VMLINUX_SYMBOL_STR(set_blocksize) },
	{ 0xaf9a8fe, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x3c49712a, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0xcc2487f8, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x61ab0bc5, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x6e302d4, __VMLINUX_SYMBOL_STR(blkdev_get) },
	{ 0xa1f806ed, __VMLINUX_SYMBOL_STR(bdget) },
	{ 0xfbea6c27, __VMLINUX_SYMBOL_STR(blk_alloc_queue) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xb5736a6a, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x9dfba532, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xc7944d35, __VMLINUX_SYMBOL_STR(__rt_spin_lock_init) },
	{ 0x6b3e609d, __VMLINUX_SYMBOL_STR(__rt_mutex_init) },
	{ 0x391dcdd, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0xd01d57ff, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1f7cea7b, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0x541653c2, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0xf14d511f, __VMLINUX_SYMBOL_STR(kobject_init_and_add) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x65f68adb, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0xfd2268fa, __VMLINUX_SYMBOL_STR(bio_reset) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xca9360b5, __VMLINUX_SYMBOL_STR(rb_next) },
	{ 0x32fc193c, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0xe57e7eca, __VMLINUX_SYMBOL_STR(bio_clone_bioset) },
	{ 0x64999478, __VMLINUX_SYMBOL_STR(congestion_wait) },
	{ 0x963b5ff8, __VMLINUX_SYMBOL_STR(set_bdi_congested) },
	{ 0xffe6e047, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0xa1c4b71b, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0x619073c0, __VMLINUX_SYMBOL_STR(bio_chain) },
	{ 0x22d565a8, __VMLINUX_SYMBOL_STR(bio_split) },
	{ 0x6e9ef562, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x4d7272e4, __VMLINUX_SYMBOL_STR(migrate_enable) },
	{ 0x3c73e696, __VMLINUX_SYMBOL_STR(rt_spin_unlock) },
	{ 0xb859f521, __VMLINUX_SYMBOL_STR(rt_spin_lock) },
	{ 0x49608959, __VMLINUX_SYMBOL_STR(migrate_disable) },
	{ 0xac1c6b4a, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xe915b500, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x7353905, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x65dca6f0, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0x4f476e96, __VMLINUX_SYMBOL_STR(init_cdrom_command) },
	{ 0x334da4e, __VMLINUX_SYMBOL_STR(scsi_command_size_tbl) },
	{ 0x622aed01, __VMLINUX_SYMBOL_STR(blk_put_request) },
	{ 0xc3264d20, __VMLINUX_SYMBOL_STR(blk_execute_rq) },
	{ 0x30656a73, __VMLINUX_SYMBOL_STR(blk_rq_map_kern) },
	{ 0xd26959a, __VMLINUX_SYMBOL_STR(blk_rq_set_block_pc) },
	{ 0x96a1b8a7, __VMLINUX_SYMBOL_STR(blk_get_request) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x96cc1a34, __VMLINUX_SYMBOL_STR(_mutex_unlock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x553c36a1, __VMLINUX_SYMBOL_STR(_mutex_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cdrom";


MODULE_INFO(srcversion, "584B237D4FF29B92DC8BD28");