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
	{ 0x1f7cea7b, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0x693be3de, __VMLINUX_SYMBOL_STR(cdev_alloc) },
	{ 0x39ebfe60, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0xd01d57ff, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xec80dffb, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc9891e43, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x541653c2, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0xaa6d4abd, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0xc27a6a87, __VMLINUX_SYMBOL_STR(kobject_set_name) },
	{ 0x96cc1a34, __VMLINUX_SYMBOL_STR(_mutex_unlock) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7e99ab81, __VMLINUX_SYMBOL_STR(kobject_create_and_add) },
	{ 0x9dfba532, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x18be9363, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8fb68d88, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0xbdb11c95, __VMLINUX_SYMBOL_STR(fasync_helper) },
	{ 0x2136e2ad, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xc9c75c59, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0xc7c9ece6, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x6b0ea621, __VMLINUX_SYMBOL_STR(kobject_add) },
	{ 0x63f26333, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0x83de0b6a, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x1e0836ff, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0xf0f34634, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0xba9a0f9b, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xe6d77379, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6e9ef562, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xfc7558b0, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5a7d63d8, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0xc705b6c5, __VMLINUX_SYMBOL_STR(kobject_init) },
	{ 0x5eae6ccf, __VMLINUX_SYMBOL_STR(kill_fasync) },
	{ 0x35ab9d30, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0x553c36a1, __VMLINUX_SYMBOL_STR(_mutex_lock) },
	{ 0xd509d1d5, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x70d53e1d, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0x81208c9f, __VMLINUX_SYMBOL_STR(try_module_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "0F713DCAF0BBA0454F96537");
