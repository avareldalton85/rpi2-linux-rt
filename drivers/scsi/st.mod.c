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
	{ 0x2136e2ad, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x8fb68d88, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0xeb5defc1, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x9bb98980, __VMLINUX_SYMBOL_STR(driver_remove_file) },
	{ 0x92eb8bed, __VMLINUX_SYMBOL_STR(driver_create_file) },
	{ 0x41586532, __VMLINUX_SYMBOL_STR(scsi_register_driver) },
	{ 0xd8e484f0, __VMLINUX_SYMBOL_STR(register_chrdev_region) },
	{ 0x63f26333, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x3a0892f, __VMLINUX_SYMBOL_STR(scsi_cmd_ioctl) },
	{ 0xa0783ed4, __VMLINUX_SYMBOL_STR(scsi_nonblockable_ioctl) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xbf562cb0, __VMLINUX_SYMBOL_STR(_mutex_lock_interruptible) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x15f677bf, __VMLINUX_SYMBOL_STR(scsi_block_when_processing_errors) },
	{ 0xc6ba564c, __VMLINUX_SYMBOL_STR(scsi_device_get) },
	{ 0xe6d77379, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x334da4e, __VMLINUX_SYMBOL_STR(scsi_command_size_tbl) },
	{ 0x622aed01, __VMLINUX_SYMBOL_STR(blk_put_request) },
	{ 0x93ab1e7a, __VMLINUX_SYMBOL_STR(blk_execute_rq_nowait) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x240ba05b, __VMLINUX_SYMBOL_STR(blk_rq_map_user) },
	{ 0xd26959a, __VMLINUX_SYMBOL_STR(blk_rq_set_block_pc) },
	{ 0x96a1b8a7, __VMLINUX_SYMBOL_STR(blk_get_request) },
	{ 0x251705a, __VMLINUX_SYMBOL_STR(__init_swait_head) },
	{ 0xb9c51b6b, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x80a472f5, __VMLINUX_SYMBOL_STR(rt_up_read) },
	{ 0xec030528, __VMLINUX_SYMBOL_STR(get_user_pages) },
	{ 0xd8db05ff, __VMLINUX_SYMBOL_STR(rt_down_read) },
	{ 0xec80dffb, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xbd2549a5, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x583db796, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xee6e693d, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x894a7579, __VMLINUX_SYMBOL_STR(__blk_put_request) },
	{ 0x37d87543, __VMLINUX_SYMBOL_STR(blk_rq_unmap_user) },
	{ 0x4c06a631, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xefaff573, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x69d38ed9, __VMLINUX_SYMBOL_STR(__scsi_print_sense) },
	{ 0x2b0ba2b0, __VMLINUX_SYMBOL_STR(scsi_sense_desc_find) },
	{ 0x796fc5ce, __VMLINUX_SYMBOL_STR(scsi_get_sense_info_fld) },
	{ 0xc65e73c, __VMLINUX_SYMBOL_STR(scsi_normalize_sense) },
	{ 0xca84c38a, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0xaa9525be, __VMLINUX_SYMBOL_STR(scsi_ioctl) },
	{ 0xd01d57ff, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x15321940, __VMLINUX_SYMBOL_STR(blk_put_queue) },
	{ 0x961a82b, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0xd93f4ade, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x88f4f2b2, __VMLINUX_SYMBOL_STR(idr_preload_end) },
	{ 0xc7c9ece6, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x84ffea8b, __VMLINUX_SYMBOL_STR(idr_preload) },
	{ 0x8b834218, __VMLINUX_SYMBOL_STR(__mutex_do_init) },
	{ 0x6b3e609d, __VMLINUX_SYMBOL_STR(__rt_mutex_init) },
	{ 0x5a0409a3, __VMLINUX_SYMBOL_STR(blk_queue_rq_timeout) },
	{ 0xd99927a3, __VMLINUX_SYMBOL_STR(blk_get_queue) },
	{ 0xb5736a6a, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc9c75c59, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0xf0f34634, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x693be3de, __VMLINUX_SYMBOL_STR(cdev_alloc) },
	{ 0x4d7272e4, __VMLINUX_SYMBOL_STR(migrate_enable) },
	{ 0x3c73e696, __VMLINUX_SYMBOL_STR(rt_spin_unlock) },
	{ 0x1e0836ff, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0xb859f521, __VMLINUX_SYMBOL_STR(rt_spin_lock) },
	{ 0x49608959, __VMLINUX_SYMBOL_STR(migrate_disable) },
	{ 0x96cc1a34, __VMLINUX_SYMBOL_STR(_mutex_unlock) },
	{ 0x553c36a1, __VMLINUX_SYMBOL_STR(_mutex_lock) },
	{ 0xcc2487f8, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe4bcfd45, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x2111b637, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x39ebfe60, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x732bdae8, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "BE304EC4B1D459A594BF48B");
