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
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x37a666db, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0x3c59ce6e, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0xe1b0c970, __VMLINUX_SYMBOL_STR(class_interface_unregister) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0xf7b92740, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0xee98cf49, __VMLINUX_SYMBOL_STR(scsi_register_interface) },
	{ 0x4c3ef752, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xd8e484f0, __VMLINUX_SYMBOL_STR(register_chrdev_region) },
	{ 0x334da4e, __VMLINUX_SYMBOL_STR(scsi_command_size_tbl) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x72350130, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xbebbe9e5, __VMLINUX_SYMBOL_STR(scsi_reset_provider) },
	{ 0x27f6961f, __VMLINUX_SYMBOL_STR(sg_scsi_ioctl) },
	{ 0x45060b24, __VMLINUX_SYMBOL_STR(blk_trace_setup) },
	{ 0x1fa2a53e, __VMLINUX_SYMBOL_STR(rt_write_lock) },
	{ 0xfe6b8843, __VMLINUX_SYMBOL_STR(blk_trace_startstop) },
	{ 0x8102fb9f, __VMLINUX_SYMBOL_STR(blk_trace_remove) },
	{ 0xaa9525be, __VMLINUX_SYMBOL_STR(scsi_ioctl) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xf5eb86ea, __VMLINUX_SYMBOL_STR(blk_verify_command) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x4821bc26, __VMLINUX_SYMBOL_STR(blk_end_request_all) },
	{ 0xc11d8093, __VMLINUX_SYMBOL_STR(iov_shorten) },
	{ 0x240ba05b, __VMLINUX_SYMBOL_STR(blk_rq_map_user) },
	{ 0x93ab1e7a, __VMLINUX_SYMBOL_STR(blk_execute_rq_nowait) },
	{ 0xaaf71948, __VMLINUX_SYMBOL_STR(blk_rq_map_user_iov) },
	{ 0xe2e8065e, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd26959a, __VMLINUX_SYMBOL_STR(blk_rq_set_block_pc) },
	{ 0x96a1b8a7, __VMLINUX_SYMBOL_STR(blk_get_request) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xaf9a8fe, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0xa8ce6ea4, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xfee09c47, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x15f677bf, __VMLINUX_SYMBOL_STR(scsi_block_when_processing_errors) },
	{ 0xc6ba564c, __VMLINUX_SYMBOL_STR(scsi_device_get) },
	{ 0xe6d77379, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0x206aecdd, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0xba9a0f9b, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xca84c38a, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0x622aed01, __VMLINUX_SYMBOL_STR(blk_put_request) },
	{ 0x37d87543, __VMLINUX_SYMBOL_STR(blk_rq_unmap_user) },
	{ 0xbd2549a5, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0xe4bcfd45, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x583db796, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xd01d57ff, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x961a82b, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0xd93f4ade, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0xc9c75c59, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0xf0f34634, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x88f4f2b2, __VMLINUX_SYMBOL_STR(idr_preload_end) },
	{ 0xb0130703, __VMLINUX_SYMBOL_STR(__rt_rwlock_init) },
	{ 0x9dfba532, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x8b834218, __VMLINUX_SYMBOL_STR(__mutex_do_init) },
	{ 0x6b3e609d, __VMLINUX_SYMBOL_STR(__rt_mutex_init) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xc7c9ece6, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x84ffea8b, __VMLINUX_SYMBOL_STR(idr_preload) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x693be3de, __VMLINUX_SYMBOL_STR(cdev_alloc) },
	{ 0xb5736a6a, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x69d38ed9, __VMLINUX_SYMBOL_STR(__scsi_print_sense) },
	{ 0xc65e73c, __VMLINUX_SYMBOL_STR(scsi_normalize_sense) },
	{ 0x894a7579, __VMLINUX_SYMBOL_STR(__blk_put_request) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xec80dffb, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x83de0b6a, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x96cc1a34, __VMLINUX_SYMBOL_STR(_mutex_unlock) },
	{ 0x553c36a1, __VMLINUX_SYMBOL_STR(_mutex_lock) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xbdb11c95, __VMLINUX_SYMBOL_STR(fasync_helper) },
	{ 0x39ebfe60, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0xaa6d4abd, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x732bdae8, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0x5eae6ccf, __VMLINUX_SYMBOL_STR(kill_fasync) },
	{ 0x6e9ef562, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xcc2487f8, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x1e0836ff, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0x81a61c2b, __VMLINUX_SYMBOL_STR(rt_write_unlock) },
	{ 0x7912bc57, __VMLINUX_SYMBOL_STR(rt_write_lock_irqsave) },
	{ 0x1ec5ea56, __VMLINUX_SYMBOL_STR(rt_read_unlock) },
	{ 0x7051da74, __VMLINUX_SYMBOL_STR(rt_read_lock_irqsave) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "3738C5FC3F75E4CB44B0105");
