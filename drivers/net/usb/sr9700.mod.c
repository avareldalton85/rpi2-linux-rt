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
	{ 0xa919a404, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0x978e6ace, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
	{ 0x353b627c, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0x980eaf42, __VMLINUX_SYMBOL_STR(usbnet_get_drvinfo) },
	{ 0xc995c3c7, __VMLINUX_SYMBOL_STR(usbnet_set_settings) },
	{ 0xc0b969a8, __VMLINUX_SYMBOL_STR(usbnet_get_settings) },
	{ 0xc8a22422, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0xae95c945, __VMLINUX_SYMBOL_STR(usbnet_change_mtu) },
	{ 0xbc658dfe, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xe25974b5, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0xe26caa99, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0x708bb25, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0x5197cd8d, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x43d1951f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x5d0883c0, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0xc568e5d1, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0xfaf98462, __VMLINUX_SYMBOL_STR(bitrev32) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x96cc1a34, __VMLINUX_SYMBOL_STR(_mutex_unlock) },
	{ 0x553c36a1, __VMLINUX_SYMBOL_STR(_mutex_lock) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x93033e04, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x994fbd6, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0x37893f21, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0x1881412, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0x579c1889, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0x7852c980, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0x7337c7e8, __VMLINUX_SYMBOL_STR(mii_check_media) },
	{ 0x9a08450a, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x98412643, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x99862c64, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x368d05b9, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0x7e51a024, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xd6b7dd32, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0FE6p9700d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "1966BE39F5F0D5A7670FC27");
