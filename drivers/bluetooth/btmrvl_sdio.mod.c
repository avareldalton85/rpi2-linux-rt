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
	{ 0xd3f1840e, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x87038723, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0xd01d57ff, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xfa6adb64, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xdd52e418, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x7cfb6e13, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0x29640b76, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0x8c7d2aa1, __VMLINUX_SYMBOL_STR(btmrvl_register_hdev) },
	{ 0x7ab5cb7e, __VMLINUX_SYMBOL_STR(btmrvl_add_card) },
	{ 0x2ac4c9f6, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0xd509d1d5, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xd7442057, __VMLINUX_SYMBOL_STR(bt_info) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x3abc45b6, __VMLINUX_SYMBOL_STR(btmrvl_send_module_cfg_cmd) },
	{ 0xa05a7494, __VMLINUX_SYMBOL_STR(btmrvl_remove_card) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xe6225acb, __VMLINUX_SYMBOL_STR(btmrvl_check_evtpkt) },
	{ 0xc636d299, __VMLINUX_SYMBOL_STR(hci_recv_frame) },
	{ 0x629d273a, __VMLINUX_SYMBOL_STR(btmrvl_process_event) },
	{ 0x99862c64, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x40d9bc6f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x4f4b221b, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xa5d22097, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xedb3e653, __VMLINUX_SYMBOL_STR(sdio_writesb) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x126a234b, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0x52bd370, __VMLINUX_SYMBOL_STR(btmrvl_interrupt) },
	{ 0x4d7272e4, __VMLINUX_SYMBOL_STR(migrate_enable) },
	{ 0x3c73e696, __VMLINUX_SYMBOL_STR(rt_spin_unlock) },
	{ 0xb859f521, __VMLINUX_SYMBOL_STR(rt_spin_lock) },
	{ 0x49608959, __VMLINUX_SYMBOL_STR(migrate_disable) },
	{ 0xd0c7170a, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0xa22f0c71, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0xc5dddd52, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0x6f414bec, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0xa0a01edf, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0x4472457d, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x213a4d5, __VMLINUX_SYMBOL_STR(sdio_set_host_pm_flags) },
	{ 0x7a9e3516, __VMLINUX_SYMBOL_STR(btmrvl_enable_hs) },
	{ 0x39a0025a, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0xd4a45071, __VMLINUX_SYMBOL_STR(hci_suspend_dev) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x47022514, __VMLINUX_SYMBOL_STR(bt_err) },
	{ 0x333b2df3, __VMLINUX_SYMBOL_STR(hci_resume_dev) },
	{ 0x6219f633, __VMLINUX_SYMBOL_STR(sdio_get_host_pm_caps) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=btmrvl,bluetooth";

MODULE_ALIAS("sdio:c*v02DFd9105*");
MODULE_ALIAS("sdio:c*v02DFd911A*");
MODULE_ALIAS("sdio:c*v02DFd911B*");
MODULE_ALIAS("sdio:c*v02DFd912A*");
MODULE_ALIAS("sdio:c*v02DFd9136*");
MODULE_ALIAS("sdio:c*v02DFd912E*");

MODULE_INFO(srcversion, "31768E7DAAD787EFCDCF9CF");
