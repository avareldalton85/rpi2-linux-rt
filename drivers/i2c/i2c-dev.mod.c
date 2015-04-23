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
	{ 0x37a666db, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xf16c57f4, __VMLINUX_SYMBOL_STR(bus_unregister_notifier) },
	{ 0xff11fa65, __VMLINUX_SYMBOL_STR(i2c_bus_type) },
	{ 0x6bc3fbc0, __VMLINUX_SYMBOL_STR(__unregister_chrdev) },
	{ 0xf7b92740, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0xd8386d4a, __VMLINUX_SYMBOL_STR(i2c_for_each_dev) },
	{ 0x2dd7c64c, __VMLINUX_SYMBOL_STR(bus_register_notifier) },
	{ 0x4c3ef752, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x6ecc7bcb, __VMLINUX_SYMBOL_STR(__register_chrdev) },
	{ 0xaa6d4abd, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc9c75c59, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x5e1871e1, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0xc80904b6, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x1d38776, __VMLINUX_SYMBOL_STR(i2c_smbus_xfer) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x1f921453, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe2e8065e, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x5a9e7447, __VMLINUX_SYMBOL_STR(i2c_verify_client) },
	{ 0x1f0e10b3, __VMLINUX_SYMBOL_STR(i2c_adapter_type) },
	{ 0xafe17f87, __VMLINUX_SYMBOL_STR(device_for_each_child) },
	{ 0xd01d57ff, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7007361e, __VMLINUX_SYMBOL_STR(i2c_get_adapter) },
	{ 0xcc428b64, __VMLINUX_SYMBOL_STR(i2c_put_adapter) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4d7272e4, __VMLINUX_SYMBOL_STR(migrate_enable) },
	{ 0x3c73e696, __VMLINUX_SYMBOL_STR(rt_spin_unlock) },
	{ 0xb859f521, __VMLINUX_SYMBOL_STR(rt_spin_lock) },
	{ 0x49608959, __VMLINUX_SYMBOL_STR(migrate_disable) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "0A2052B11E8676D7A08FD4B");
