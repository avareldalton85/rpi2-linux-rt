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
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x5e2ee4ce, __VMLINUX_SYMBOL_STR(dvb_usb_device_exit) },
	{ 0xde224bfd, __VMLINUX_SYMBOL_STR(dvb_usb_device_init) },
	{ 0x96cc1a34, __VMLINUX_SYMBOL_STR(_mutex_unlock) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xe5c22ac0, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x5197cd8d, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x81c0ddfb, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1f54e93d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x43d1951f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xbf562cb0, __VMLINUX_SYMBOL_STR(_mutex_lock_interruptible) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-usb";

MODULE_ALIAS("usb:v13D3p3205d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3206d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3223d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3224d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "4E2E245DB5DAF08B73EEA4E");
