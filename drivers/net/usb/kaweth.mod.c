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
	{ 0xbb06602b, __VMLINUX_SYMBOL_STR(eth_change_mtu) },
	{ 0xbc658dfe, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xb82303fc, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x5197cd8d, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x43d1951f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xd6b7dd32, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xbded9953, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x57e3e35b, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x65777efb, __VMLINUX_SYMBOL_STR(usb_reset_configuration) },
	{ 0xc7944d35, __VMLINUX_SYMBOL_STR(__rt_spin_lock_init) },
	{ 0x6b3e609d, __VMLINUX_SYMBOL_STR(__rt_mutex_init) },
	{ 0xe4f196c3, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0xfa6adb64, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xdd52e418, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xd01d57ff, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa8ce6ea4, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xfee09c47, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9dfba532, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x3cd4e86a, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9ba1fa75, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x242c7516, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_irq) },
	{ 0xcf1572f5, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x86ced475, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0xf95ad897, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x4ef4fb73, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xb22f20a5, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0xe3e878e7, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x77f1f9a9, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x29df4bc9, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x24d7b4eb, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xed3e9df2, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xcce0378d, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x50d11cb7, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x40d9bc6f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xed19a60d, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x6e9ef562, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x4d7272e4, __VMLINUX_SYMBOL_STR(migrate_enable) },
	{ 0x3c73e696, __VMLINUX_SYMBOL_STR(rt_spin_unlock) },
	{ 0xb859f521, __VMLINUX_SYMBOL_STR(rt_spin_lock) },
	{ 0x49608959, __VMLINUX_SYMBOL_STR(migrate_disable) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xe851bb05, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x18be9363, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8a2396a, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v03E8p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0901d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0506p03E8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0506p11F8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p4000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0565p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0565p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0565p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05E9p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05E9p0009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp2202d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E1p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E1p0009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p4000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C9pB010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v085Ap0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v085Ap0009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v087Dp5704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0951p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v095Ap3003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10BDp1427d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1342p0204d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D2p0400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1485p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1485p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1645p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1645p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1645p8005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p0323d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p4000d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "11CE9234F37ACDF175366B7");
