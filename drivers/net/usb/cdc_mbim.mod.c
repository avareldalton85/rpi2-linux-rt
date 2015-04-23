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
	{ 0x97ca9a9e, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0x54eddbe4, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0xc8a22422, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0xae95c945, __VMLINUX_SYMBOL_STR(usbnet_change_mtu) },
	{ 0xbc658dfe, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xb82303fc, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0xe25974b5, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0xe26caa99, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0x708bb25, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0x5197cd8d, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x43d1951f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xd04caf89, __VMLINUX_SYMBOL_STR(usb_match_id) },
	{ 0xb514d72b, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xca70e0b2, __VMLINUX_SYMBOL_STR(usb_cdc_wdm_register) },
	{ 0xc1cfc52, __VMLINUX_SYMBOL_STR(cdc_ncm_bind_common) },
	{ 0xa4905aaa, __VMLINUX_SYMBOL_STR(cdc_ncm_select_altsetting) },
	{ 0x6a7a82bf, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0xbfbee82, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x8f61d4a, __VMLINUX_SYMBOL_STR(cdc_ncm_unbind) },
	{ 0x3e1de77f, __VMLINUX_SYMBOL_STR(ipv6_stub) },
	{ 0xa09aee34, __VMLINUX_SYMBOL_STR(in6_dev_finish_destroy) },
	{ 0xd41d2469, __VMLINUX_SYMBOL_STR(__vlan_find_dev_deep_rcu) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0x271d5849, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xaffaf221, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x368d05b9, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x40d9bc6f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xed19a60d, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x7c4798f9, __VMLINUX_SYMBOL_STR(cdc_ncm_rx_verify_ndp16) },
	{ 0xf9cbd452, __VMLINUX_SYMBOL_STR(cdc_ncm_rx_verify_nth16) },
	{ 0x9a08450a, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x799aca4, __VMLINUX_SYMBOL_STR(local_bh_enable) },
	{ 0x4d7272e4, __VMLINUX_SYMBOL_STR(migrate_enable) },
	{ 0x3c73e696, __VMLINUX_SYMBOL_STR(rt_spin_unlock) },
	{ 0xfa5d8f59, __VMLINUX_SYMBOL_STR(cdc_ncm_fill_tx_frame) },
	{ 0xb859f521, __VMLINUX_SYMBOL_STR(rt_spin_lock) },
	{ 0x49608959, __VMLINUX_SYMBOL_STR(migrate_disable) },
	{ 0x3ff62317, __VMLINUX_SYMBOL_STR(local_bh_disable) },
	{ 0x99862c64, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x7e51a024, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cdc-wdm,cdc_ncm";

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Eip00in*");

MODULE_INFO(srcversion, "36401438C7F054D129083A7");
