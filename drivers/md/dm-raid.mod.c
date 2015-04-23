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
	{ 0x60ee9172, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xa85f1951, __VMLINUX_SYMBOL_STR(dm_unregister_target) },
	{ 0xad3b71ad, __VMLINUX_SYMBOL_STR(dm_register_target) },
	{ 0x34413bc3, __VMLINUX_SYMBOL_STR(md_raid1_congested) },
	{ 0xfb0c6533, __VMLINUX_SYMBOL_STR(md_raid10_congested) },
	{ 0x2f7a81c3, __VMLINUX_SYMBOL_STR(md_raid5_congested) },
	{ 0xb1425b32, __VMLINUX_SYMBOL_STR(dm_table_add_target_callbacks) },
	{ 0x96cc1a34, __VMLINUX_SYMBOL_STR(_mutex_unlock) },
	{ 0x36a00f3e, __VMLINUX_SYMBOL_STR(md_run) },
	{ 0x553c36a1, __VMLINUX_SYMBOL_STR(_mutex_lock) },
	{ 0xbd2549a5, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0xee6e693d, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x327eea71, __VMLINUX_SYMBOL_STR(md_error) },
	{ 0x583db796, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x5d4901a8, __VMLINUX_SYMBOL_STR(dm_get_device) },
	{ 0x6d0f1f89, __VMLINUX_SYMBOL_STR(dm_table_get_mode) },
	{ 0xb52716a6, __VMLINUX_SYMBOL_STR(raid5_set_cache_size) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x39d6fd8b, __VMLINUX_SYMBOL_STR(dm_set_target_max_io_len) },
	{ 0x3698e0ef, __VMLINUX_SYMBOL_STR(md_rdev_init) },
	{ 0x63a7f191, __VMLINUX_SYMBOL_STR(mddev_init) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xad84bef8, __VMLINUX_SYMBOL_STR(dm_table_event) },
	{ 0x3b519c15, __VMLINUX_SYMBOL_STR(md_stop) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc8e53d30, __VMLINUX_SYMBOL_STR(md_rdev_clear) },
	{ 0x8d48c462, __VMLINUX_SYMBOL_STR(dm_put_device) },
	{ 0x41668722, __VMLINUX_SYMBOL_STR(md_stop_writes) },
	{ 0xf309d07b, __VMLINUX_SYMBOL_STR(mddev_suspend) },
	{ 0x38088b7d, __VMLINUX_SYMBOL_STR(bitmap_load) },
	{ 0xd117b02a, __VMLINUX_SYMBOL_STR(mddev_resume) },
	{ 0x299a3f7e, __VMLINUX_SYMBOL_STR(sync_page_io) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x8a984c3, __VMLINUX_SYMBOL_STR(md_reap_sync_thread) },
	{ 0xd5440a40, __VMLINUX_SYMBOL_STR(md_wakeup_thread) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0xec80dffb, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xd75f42b2, __VMLINUX_SYMBOL_STR(blk_limits_io_opt) },
	{ 0x118a5e56, __VMLINUX_SYMBOL_STR(blk_limits_io_min) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-mod,raid1,raid10,raid456,md-mod";


MODULE_INFO(srcversion, "27FFE7583BCAE848C304588");
