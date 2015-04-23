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
	{ 0xbfbee82, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x6a7a82bf, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x97ca9a9e, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0x54eddbe4, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x5197cd8d, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x43d1951f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x502cecf4, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x37893f21, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0x1881412, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0xcd839d99, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x99862c64, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x93033e04, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0xc568e5d1, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x40d9bc6f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xaffaf221, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x7e51a024, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xd6b7dd32, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0525p1080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D0p0622d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "EFF27B20292EA2953ACFB09");
