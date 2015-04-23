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
	{ 0x60ee9172, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xbd171d97, __VMLINUX_SYMBOL_STR(rt2x00usb_disconnect) },
	{ 0x1cbabf69, __VMLINUX_SYMBOL_STR(rt2x00mac_tx_frames_pending) },
	{ 0xa78f2b75, __VMLINUX_SYMBOL_STR(rt2x00mac_get_ringparam) },
	{ 0x64f009fb, __VMLINUX_SYMBOL_STR(rt2x00mac_get_antenna) },
	{ 0xee6a9469, __VMLINUX_SYMBOL_STR(rt2x00mac_set_antenna) },
	{ 0xe7470606, __VMLINUX_SYMBOL_STR(rt2x00mac_flush) },
	{ 0xe6738201, __VMLINUX_SYMBOL_STR(rt2x00mac_rfkill_poll) },
	{ 0xfe8755af, __VMLINUX_SYMBOL_STR(rt2x00mac_conf_tx) },
	{ 0x95d731ea, __VMLINUX_SYMBOL_STR(rt2x00mac_get_stats) },
	{ 0x5536d906, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_complete) },
	{ 0xd300f951, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_start) },
	{ 0xb9f6bf1, __VMLINUX_SYMBOL_STR(rt2x00mac_set_key) },
	{ 0xad1c9101, __VMLINUX_SYMBOL_STR(rt2x00mac_set_tim) },
	{ 0x7a4719ec, __VMLINUX_SYMBOL_STR(rt2x00mac_configure_filter) },
	{ 0x1465c0b5, __VMLINUX_SYMBOL_STR(rt2x00mac_bss_info_changed) },
	{ 0x995b9083, __VMLINUX_SYMBOL_STR(rt2x00mac_config) },
	{ 0x849d38d4, __VMLINUX_SYMBOL_STR(rt2x00mac_remove_interface) },
	{ 0x2e833d5a, __VMLINUX_SYMBOL_STR(rt2x00mac_add_interface) },
	{ 0x59b8b169, __VMLINUX_SYMBOL_STR(rt2x00mac_stop) },
	{ 0xf6479691, __VMLINUX_SYMBOL_STR(rt2x00mac_start) },
	{ 0xb829c477, __VMLINUX_SYMBOL_STR(rt2x00mac_tx) },
	{ 0x1e6dd14c, __VMLINUX_SYMBOL_STR(rt2x00usb_flush_queue) },
	{ 0xd6a6ca19, __VMLINUX_SYMBOL_STR(rt2x00usb_kick_queue) },
	{ 0x3857b01b, __VMLINUX_SYMBOL_STR(rt2x00usb_watchdog) },
	{ 0xaa1c7063, __VMLINUX_SYMBOL_STR(rt2x00usb_clear_entry) },
	{ 0x11266f49, __VMLINUX_SYMBOL_STR(rt2x00usb_uninitialize) },
	{ 0x3e12d514, __VMLINUX_SYMBOL_STR(rt2x00usb_initialize) },
	{ 0x5197cd8d, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x43d1951f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x29df4bc9, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xcf4cca44, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request) },
	{ 0x94dd8044, __VMLINUX_SYMBOL_STR(rt2x00usb_disable_radio) },
	{ 0x96cc1a34, __VMLINUX_SYMBOL_STR(_mutex_unlock) },
	{ 0x553c36a1, __VMLINUX_SYMBOL_STR(_mutex_lock) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x18be9363, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xfb21234d, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_req_buff_lock) },
	{ 0x3b8e878, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x8a2396a, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xaffaf221, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xcd839d99, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd3cccf82, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request_buff) },
	{ 0xb4d02050, __VMLINUX_SYMBOL_STR(rt2x00usb_probe) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00usb,rt2x00lib";

MODULE_ALIAS("usb:v0B05p1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1707d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p001Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p005Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0066d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0067d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p008Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0097d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6861d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6865d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6869d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2570d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v079Bp004Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p3C06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707pEE13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v114Bp0110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0769p11F3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F88p3012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p0260d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "35BCA7F9E349A948E166A93");
