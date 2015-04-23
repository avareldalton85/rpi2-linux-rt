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
	{ 0xf95afc31, __VMLINUX_SYMBOL_STR(unregister_quota_format) },
	{ 0xea5ab0f7, __VMLINUX_SYMBOL_STR(register_quota_format) },
	{ 0x8d55bb8a, __VMLINUX_SYMBOL_STR(qid_eq) },
	{ 0xd01d57ff, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xa8b1a189, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x5916566d, __VMLINUX_SYMBOL_STR(qtree_entry_unused) },
	{ 0x7ce18c9f, __VMLINUX_SYMBOL_STR(from_kqid) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x6ce0799a, __VMLINUX_SYMBOL_STR(dq_data_lock) },
	{ 0x42792856, __VMLINUX_SYMBOL_STR(__quota_error) },
	{ 0x4d7272e4, __VMLINUX_SYMBOL_STR(migrate_enable) },
	{ 0x3c73e696, __VMLINUX_SYMBOL_STR(rt_spin_unlock) },
	{ 0xb859f521, __VMLINUX_SYMBOL_STR(rt_spin_lock) },
	{ 0x49608959, __VMLINUX_SYMBOL_STR(migrate_disable) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4404c6f3, __VMLINUX_SYMBOL_STR(qtree_read_dquot) },
	{ 0xa3f73fab, __VMLINUX_SYMBOL_STR(qtree_write_dquot) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x45cc5d5a, __VMLINUX_SYMBOL_STR(qtree_release_dquot) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=quota_tree";


MODULE_INFO(srcversion, "81A3062429692C7727A6170");
