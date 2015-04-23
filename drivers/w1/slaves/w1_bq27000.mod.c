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
	{ 0x9131f92, __VMLINUX_SYMBOL_STR(w1_unregister_family) },
	{ 0xedbb9f74, __VMLINUX_SYMBOL_STR(w1_register_family) },
	{ 0x96cc1a34, __VMLINUX_SYMBOL_STR(_mutex_unlock) },
	{ 0xbc5ac3b4, __VMLINUX_SYMBOL_STR(w1_read_8) },
	{ 0x8d64c4d5, __VMLINUX_SYMBOL_STR(w1_write_8) },
	{ 0x553c36a1, __VMLINUX_SYMBOL_STR(_mutex_lock) },
	{ 0xe31d59ee, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0xf9da9b97, __VMLINUX_SYMBOL_STR(platform_device_put) },
	{ 0x97f71259, __VMLINUX_SYMBOL_STR(platform_device_add_data) },
	{ 0xe9c07704, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x715652ca, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wire";


MODULE_INFO(srcversion, "2D6E8423929F807650B9EBC");
