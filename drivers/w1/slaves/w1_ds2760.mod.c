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
	{ 0x3eed45ea, __VMLINUX_SYMBOL_STR(w1_reset_select_slave) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x96cc1a34, __VMLINUX_SYMBOL_STR(_mutex_unlock) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xace61110, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x17a72be0, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0xe9c07704, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0xe31d59ee, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0x715652ca, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x518b6e05, __VMLINUX_SYMBOL_STR(w1_write_block) },
	{ 0x8d64c4d5, __VMLINUX_SYMBOL_STR(w1_write_8) },
	{ 0x505b9ba8, __VMLINUX_SYMBOL_STR(w1_read_block) },
	{ 0x553c36a1, __VMLINUX_SYMBOL_STR(_mutex_lock) },
	{ 0x8205b17, __VMLINUX_SYMBOL_STR(ida_init) },
	{ 0xc726f187, __VMLINUX_SYMBOL_STR(ida_destroy) },
	{ 0xedbb9f74, __VMLINUX_SYMBOL_STR(w1_register_family) },
	{ 0xf9da9b97, __VMLINUX_SYMBOL_STR(platform_device_put) },
	{ 0x9131f92, __VMLINUX_SYMBOL_STR(w1_unregister_family) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wire";


MODULE_INFO(srcversion, "93F449DE7A165A570CE3635");
