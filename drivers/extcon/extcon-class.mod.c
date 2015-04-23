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
	{ 0x4d7272e4, __VMLINUX_SYMBOL_STR(migrate_enable) },
	{ 0x9b388444, __VMLINUX_SYMBOL_STR(get_zeroed_page) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xd9cdf7b4, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0x541653c2, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0x6b3e609d, __VMLINUX_SYMBOL_STR(__rt_mutex_init) },
	{ 0x96cc1a34, __VMLINUX_SYMBOL_STR(_mutex_unlock) },
	{ 0xe93e49c3, __VMLINUX_SYMBOL_STR(devres_free) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xb859f521, __VMLINUX_SYMBOL_STR(rt_spin_lock) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x3c73e696, __VMLINUX_SYMBOL_STR(rt_spin_unlock) },
	{ 0x7f388069, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0x18be9363, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x58a5cfc8, __VMLINUX_SYMBOL_STR(class_dev_iter_init) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe5680c54, __VMLINUX_SYMBOL_STR(devres_alloc) },
	{ 0x49608959, __VMLINUX_SYMBOL_STR(migrate_disable) },
	{ 0x89245eb3, __VMLINUX_SYMBOL_STR(kobject_uevent_env) },
	{ 0xc7944d35, __VMLINUX_SYMBOL_STR(__rt_spin_lock_init) },
	{ 0xd888b5f8, __VMLINUX_SYMBOL_STR(devres_release) },
	{ 0xc6318882, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xd6744c81, __VMLINUX_SYMBOL_STR(class_dev_iter_exit) },
	{ 0xdc9fa232, __VMLINUX_SYMBOL_STR(raw_notifier_chain_register) },
	{ 0x783c1338, __VMLINUX_SYMBOL_STR(devres_add) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xdb21bb34, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf7b92740, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x2111b637, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x553c36a1, __VMLINUX_SYMBOL_STR(_mutex_lock) },
	{ 0x48219419, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0xa851973a, __VMLINUX_SYMBOL_STR(raw_notifier_call_chain) },
	{ 0x4c3ef752, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x97ec8306, __VMLINUX_SYMBOL_STR(class_dev_iter_next) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xd06524ba, __VMLINUX_SYMBOL_STR(raw_notifier_chain_unregister) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8599B118A9500A8359528C4");
