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
	{ 0xf3742e7d, __VMLINUX_SYMBOL_STR(scsi_set_medium_removal) },
	{ 0xd01d57ff, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x5a0409a3, __VMLINUX_SYMBOL_STR(blk_queue_rq_timeout) },
	{ 0x4d7272e4, __VMLINUX_SYMBOL_STR(migrate_enable) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xb5736a6a, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0xc65e73c, __VMLINUX_SYMBOL_STR(scsi_normalize_sense) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x188d46e2, __VMLINUX_SYMBOL_STR(cdrom_number_of_slots) },
	{ 0xfef96e23, __VMLINUX_SYMBOL_STR(__scsi_print_command) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0x961a82b, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x6d23254d, __VMLINUX_SYMBOL_STR(scsi_execute_req_flags) },
	{ 0x9c27ffaf, __VMLINUX_SYMBOL_STR(unregister_cdrom) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x188c0856, __VMLINUX_SYMBOL_STR(blk_dump_rq_flags) },
	{ 0x96cc1a34, __VMLINUX_SYMBOL_STR(_mutex_unlock) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xf3cffdfc, __VMLINUX_SYMBOL_STR(cdrom_open) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xa13dc19f, __VMLINUX_SYMBOL_STR(scsi_execute) },
	{ 0xb859f521, __VMLINUX_SYMBOL_STR(rt_spin_lock) },
	{ 0x3c73e696, __VMLINUX_SYMBOL_STR(rt_spin_unlock) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xff1c5d5a, __VMLINUX_SYMBOL_STR(cdrom_release) },
	{ 0xe2916836, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0xeb5defc1, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xcc4b90, __VMLINUX_SYMBOL_STR(cdrom_get_media_event) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0x49608959, __VMLINUX_SYMBOL_STR(migrate_disable) },
	{ 0x7c88ab09, __VMLINUX_SYMBOL_STR(cdrom_check_events) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0xc0285aeb, __VMLINUX_SYMBOL_STR(cdrom_get_last_written) },
	{ 0xca84c38a, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0xa0783ed4, __VMLINUX_SYMBOL_STR(scsi_nonblockable_ioctl) },
	{ 0xaa9525be, __VMLINUX_SYMBOL_STR(scsi_ioctl) },
	{ 0xcc2487f8, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x41586532, __VMLINUX_SYMBOL_STR(scsi_register_driver) },
	{ 0x15f677bf, __VMLINUX_SYMBOL_STR(scsi_block_when_processing_errors) },
	{ 0x12075c22, __VMLINUX_SYMBOL_STR(scsi_test_unit_ready) },
	{ 0x303877e9, __VMLINUX_SYMBOL_STR(scsi_init_io) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe965ba0f, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0xaa1d884e, __VMLINUX_SYMBOL_STR(cdrom_ioctl) },
	{ 0xd30a5aa6, __VMLINUX_SYMBOL_STR(register_cdrom) },
	{ 0x553c36a1, __VMLINUX_SYMBOL_STR(_mutex_lock) },
	{ 0xc6ba564c, __VMLINUX_SYMBOL_STR(scsi_device_get) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x451c1de1, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0x2906b968, __VMLINUX_SYMBOL_STR(scsi_mode_sense) },
	{ 0xca5dbc50, __VMLINUX_SYMBOL_STR(scsi_print_sense_hdr) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cdrom";


MODULE_INFO(srcversion, "17C85C0CEFD31DA21B50CC9");
