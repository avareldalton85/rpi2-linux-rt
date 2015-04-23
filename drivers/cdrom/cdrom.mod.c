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
	{ 0xd26959a, __VMLINUX_SYMBOL_STR(blk_rq_set_block_pc) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x43dafbfc, __VMLINUX_SYMBOL_STR(register_sysctl_table) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xac4782c4, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0x622aed01, __VMLINUX_SYMBOL_STR(blk_put_request) },
	{ 0x96cc1a34, __VMLINUX_SYMBOL_STR(_mutex_unlock) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x60ee9172, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xe8593f9, __VMLINUX_SYMBOL_STR(scsi_cmd_blk_ioctl) },
	{ 0x37d87543, __VMLINUX_SYMBOL_STR(blk_rq_unmap_user) },
	{ 0xa0689b8f, __VMLINUX_SYMBOL_STR(invalidate_bdev) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x8fa985f9, __VMLINUX_SYMBOL_STR(check_disk_change) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x240ba05b, __VMLINUX_SYMBOL_STR(blk_rq_map_user) },
	{ 0x244ea23c, __VMLINUX_SYMBOL_STR(proc_dostring) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xa2c0c428, __VMLINUX_SYMBOL_STR(unregister_sysctl_table) },
	{ 0xc3264d20, __VMLINUX_SYMBOL_STR(blk_execute_rq) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x553c36a1, __VMLINUX_SYMBOL_STR(_mutex_lock) },
	{ 0x96a1b8a7, __VMLINUX_SYMBOL_STR(blk_get_request) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "643D8D190B2C19E45D6BDE6");
