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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xb97f06bd, __VMLINUX_SYMBOL_STR(usb_stor_set_xfer_buf) },
	{ 0xb143399a, __VMLINUX_SYMBOL_STR(usb_stor_bulk_transfer_buf) },
	{ 0xc1ab72ee, __VMLINUX_SYMBOL_STR(usb_stor_access_xfer_buf) },
	{ 0xeb4c24ad, __VMLINUX_SYMBOL_STR(usb_stor_post_reset) },
	{ 0x65777efb, __VMLINUX_SYMBOL_STR(usb_reset_configuration) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x1b814fe4, __VMLINUX_SYMBOL_STR(usb_stor_disconnect) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5197cd8d, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x333633c1, __VMLINUX_SYMBOL_STR(usb_stor_probe2) },
	{ 0x9ad0469, __VMLINUX_SYMBOL_STR(fill_inquiry_response) },
	{ 0x5f2ce5cd, __VMLINUX_SYMBOL_STR(usb_stor_pre_reset) },
	{ 0xc43d953e, __VMLINUX_SYMBOL_STR(usb_stor_ctrl_transfer) },
	{ 0x8bca48d8, __VMLINUX_SYMBOL_STR(usb_stor_CB_reset) },
	{ 0x211c61a1, __VMLINUX_SYMBOL_STR(usb_stor_probe1) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x43d1951f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x68ca43b6, __VMLINUX_SYMBOL_STR(usb_stor_CB_transport) },
	{ 0xe1878c4c, __VMLINUX_SYMBOL_STR(usb_stor_bulk_transfer_sg) },
	{ 0x10a270b4, __VMLINUX_SYMBOL_STR(usb_stor_bulk_srb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0436p0005d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E6p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E6p0005d020[0-8]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E6p0005d01*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp0105d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0781p0200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AFp0006d0100dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "EA10ADC1F33D97A73C0931D");
