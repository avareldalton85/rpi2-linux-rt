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
	{ 0x6dac7163, __VMLINUX_SYMBOL_STR(unregister_md_personality) },
	{ 0x4542e9ad, __VMLINUX_SYMBOL_STR(register_md_personality) },
	{ 0x32fc193c, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0xf5e5a534, __VMLINUX_SYMBOL_STR(md_flush_request) },
	{ 0xffe6e047, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x619073c0, __VMLINUX_SYMBOL_STR(bio_chain) },
	{ 0x22d565a8, __VMLINUX_SYMBOL_STR(bio_split) },
	{ 0xc9445bd2, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0x39c7224a, __VMLINUX_SYMBOL_STR(md_integrity_register) },
	{ 0xc807fb01, __VMLINUX_SYMBOL_STR(blk_queue_merge_bvec) },
	{ 0x3a1a1f4, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0xd4e1f891, __VMLINUX_SYMBOL_STR(blk_queue_max_discard_sectors) },
	{ 0x97846689, __VMLINUX_SYMBOL_STR(blk_queue_max_write_same_sectors) },
	{ 0xf5687b84, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0xf720e678, __VMLINUX_SYMBOL_STR(md_check_no_bitmap) },
	{ 0x10594dff, __VMLINUX_SYMBOL_STR(blk_sync_queue) },
	{ 0xac1c6b4a, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x506447e4, __VMLINUX_SYMBOL_STR(mddev_congested) },
	{ 0xd01d57ff, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3615401d, __VMLINUX_SYMBOL_STR(blk_queue_io_opt) },
	{ 0x1b2c012f, __VMLINUX_SYMBOL_STR(blk_queue_io_min) },
	{ 0xc8b78955, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe915b500, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=md-mod";


MODULE_INFO(srcversion, "0A3013E2C3A419446FA2D9F");
