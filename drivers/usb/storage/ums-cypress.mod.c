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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xeb4c24ad, __VMLINUX_SYMBOL_STR(usb_stor_post_reset) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x1bc3edc2, __VMLINUX_SYMBOL_STR(usb_stor_sense_invalidCDB) },
	{ 0x1b814fe4, __VMLINUX_SYMBOL_STR(usb_stor_disconnect) },
	{ 0x63bd262b, __VMLINUX_SYMBOL_STR(scsi_eh_restore_cmnd) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5197cd8d, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x333633c1, __VMLINUX_SYMBOL_STR(usb_stor_probe2) },
	{ 0x6d7bee87, __VMLINUX_SYMBOL_STR(usb_stor_transparent_scsi_command) },
	{ 0x5f2ce5cd, __VMLINUX_SYMBOL_STR(usb_stor_pre_reset) },
	{ 0x211c61a1, __VMLINUX_SYMBOL_STR(usb_stor_probe1) },
	{ 0xec991d19, __VMLINUX_SYMBOL_STR(scsi_eh_prep_cmnd) },
	{ 0x43d1951f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v04B4p6830d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p6831d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14CDp6116d0160dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "DE2B1BDD05374A3540BED84");
