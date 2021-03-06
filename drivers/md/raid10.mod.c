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
	{ 0xc807fb01, __VMLINUX_SYMBOL_STR(blk_queue_merge_bvec) },
	{ 0x22d565a8, __VMLINUX_SYMBOL_STR(bio_split) },
	{ 0x32fc193c, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0xd01d57ff, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x4d7272e4, __VMLINUX_SYMBOL_STR(migrate_enable) },
	{ 0xcf1a6f5e, __VMLINUX_SYMBOL_STR(submit_bio_wait) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x3615401d, __VMLINUX_SYMBOL_STR(blk_queue_io_opt) },
	{ 0x7c27c1ce, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0x506447e4, __VMLINUX_SYMBOL_STR(mddev_congested) },
	{ 0xb1540781, __VMLINUX_SYMBOL_STR(rdev_set_badblocks) },
	{ 0xec80dffb, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf12d798a, __VMLINUX_SYMBOL_STR(md_is_badblock) },
	{ 0xde3a09f9, __VMLINUX_SYMBOL_STR(bio_clone_mddev) },
	{ 0x45bf1d90, __VMLINUX_SYMBOL_STR(bio_alloc_mddev) },
	{ 0x36d57ffe, __VMLINUX_SYMBOL_STR(md_check_recovery) },
	{ 0x6b3e609d, __VMLINUX_SYMBOL_STR(__rt_mutex_init) },
	{ 0x1b2c012f, __VMLINUX_SYMBOL_STR(blk_queue_io_min) },
	{ 0xc8d94dd1, __VMLINUX_SYMBOL_STR(md_write_end) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0xac1c6b4a, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x6d921dae, __VMLINUX_SYMBOL_STR(bitmap_endwrite) },
	{ 0x3c49712a, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0xd89a59ab, __VMLINUX_SYMBOL_STR(bitmap_unplug) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xad16f14d, __VMLINUX_SYMBOL_STR(bio_trim) },
	{ 0xcc03202b, __VMLINUX_SYMBOL_STR(md_new_event) },
	{ 0x6dac7163, __VMLINUX_SYMBOL_STR(unregister_md_personality) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x90e9cc0a, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0x583db796, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xb859f521, __VMLINUX_SYMBOL_STR(rt_spin_lock) },
	{ 0x3c73e696, __VMLINUX_SYMBOL_STR(rt_spin_unlock) },
	{ 0xb3ce087d, __VMLINUX_SYMBOL_STR(bitmap_resize) },
	{ 0x9dfba532, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfd2268fa, __VMLINUX_SYMBOL_STR(bio_reset) },
	{ 0xcb53d931, __VMLINUX_SYMBOL_STR(bitmap_start_sync) },
	{ 0xd27b25dd, __VMLINUX_SYMBOL_STR(blk_check_plugged) },
	{ 0x75a57170, __VMLINUX_SYMBOL_STR(md_register_thread) },
	{ 0xf5e5a534, __VMLINUX_SYMBOL_STR(md_flush_request) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xd4e1f891, __VMLINUX_SYMBOL_STR(blk_queue_max_discard_sectors) },
	{ 0x65f68adb, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0xbedbd2dc, __VMLINUX_SYMBOL_STR(md_do_sync) },
	{ 0xc8b78955, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0xead2d5eb, __VMLINUX_SYMBOL_STR(bitmap_close_sync) },
	{ 0x619073c0, __VMLINUX_SYMBOL_STR(bio_chain) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x10594dff, __VMLINUX_SYMBOL_STR(blk_sync_queue) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xc9445bd2, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0x49608959, __VMLINUX_SYMBOL_STR(migrate_disable) },
	{ 0x33ca785d, __VMLINUX_SYMBOL_STR(md_wait_for_blocked_rdev) },
	{ 0x83de0b6a, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x719707, __VMLINUX_SYMBOL_STR(md_integrity_add_rdev) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xbd2549a5, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0xffe6e047, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x3baf571, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xc7944d35, __VMLINUX_SYMBOL_STR(__rt_spin_lock_init) },
	{ 0x3e2ca333, __VMLINUX_SYMBOL_STR(md_done_sync) },
	{ 0xd93f4ade, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0xbd9074b1, __VMLINUX_SYMBOL_STR(blk_finish_plug) },
	{ 0x2d2b004e, __VMLINUX_SYMBOL_STR(bitmap_cond_end_sync) },
	{ 0xa1c4b71b, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0x776c353f, __VMLINUX_SYMBOL_STR(md_write_start) },
	{ 0xe915b500, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x5ffc64b6, __VMLINUX_SYMBOL_STR(rdev_clear_badblocks) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x72350130, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x3a1a1f4, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0x391dcdd, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0x4f14289e, __VMLINUX_SYMBOL_STR(sysfs_notify) },
	{ 0xd5440a40, __VMLINUX_SYMBOL_STR(md_wakeup_thread) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0x9c863abf, __VMLINUX_SYMBOL_STR(kernfs_notify) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x60a816ac, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0x6e9ef562, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xfee09c47, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x299a3f7e, __VMLINUX_SYMBOL_STR(sync_page_io) },
	{ 0xcc2082f4, __VMLINUX_SYMBOL_STR(md_unregister_thread) },
	{ 0x99c2c1c7, __VMLINUX_SYMBOL_STR(md_finish_reshape) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xca3308b4, __VMLINUX_SYMBOL_STR(bitmap_startwrite) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1b82fefa, __VMLINUX_SYMBOL_STR(md_unplug) },
	{ 0x327eea71, __VMLINUX_SYMBOL_STR(md_error) },
	{ 0xee6e693d, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xa8ce6ea4, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x5e515be6, __VMLINUX_SYMBOL_STR(ktime_get_ts64) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x7d705738, __VMLINUX_SYMBOL_STR(blk_start_plug) },
	{ 0x97846689, __VMLINUX_SYMBOL_STR(blk_queue_max_write_same_sectors) },
	{ 0x39c7224a, __VMLINUX_SYMBOL_STR(md_integrity_register) },
	{ 0x4542e9ad, __VMLINUX_SYMBOL_STR(register_md_personality) },
	{ 0x9c3bc0ac, __VMLINUX_SYMBOL_STR(bitmap_end_sync) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=md-mod";


MODULE_INFO(srcversion, "47E66EAA9813AF3125FCCFA");
