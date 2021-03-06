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
	{ 0x5197cd8d, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x43d1951f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x86ced475, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0xfba1e476, __VMLINUX_SYMBOL_STR(ir_raw_event_store_with_filter) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x4c06a631, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xd01d57ff, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x29df4bc9, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x18be9363, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xfac87cdf, __VMLINUX_SYMBOL_STR(rc_register_device) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x251705a, __VMLINUX_SYMBOL_STR(__init_swait_head) },
	{ 0x8b834218, __VMLINUX_SYMBOL_STR(__mutex_do_init) },
	{ 0x6b3e609d, __VMLINUX_SYMBOL_STR(__rt_mutex_init) },
	{ 0x3cd4e86a, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x57e3e35b, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0xaf186cfd, __VMLINUX_SYMBOL_STR(rc_free_device) },
	{ 0xe2bf4cea, __VMLINUX_SYMBOL_STR(rc_allocate_device) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb22f20a5, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0xe3e878e7, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x9102dda0, __VMLINUX_SYMBOL_STR(rc_unregister_device) },
	{ 0xed3e9df2, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xf95ad897, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x14c0c89d, __VMLINUX_SYMBOL_STR(ir_raw_event_handle) },
	{ 0x97afacb1, __VMLINUX_SYMBOL_STR(ir_raw_event_store) },
	{ 0x7792392e, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x8a2396a, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x96cc1a34, __VMLINUX_SYMBOL_STR(_mutex_unlock) },
	{ 0x553c36a1, __VMLINUX_SYMBOL_STR(_mutex_lock) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rc-core";

MODULE_ALIAS("usb:v1781p0938d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "EEB6D46232BA53FADEF87B3");
