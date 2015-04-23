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
	{ 0xa0a01edf, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0x126a234b, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xd01d57ff, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x4d7272e4, __VMLINUX_SYMBOL_STR(migrate_enable) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6524badb, __VMLINUX_SYMBOL_STR(mwifiex_cancel_hs) },
	{ 0xedb3e653, __VMLINUX_SYMBOL_STR(sdio_writesb) },
	{ 0x2ac4c9f6, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0x29640b76, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0x1afae5e7, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x6d7e7a80, __VMLINUX_SYMBOL_STR(mwifiex_disable_auto_ds) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x7e51a024, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xae33874e, __VMLINUX_SYMBOL_STR(mwifiex_process_sleep_confirm_resp) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x23036665, __VMLINUX_SYMBOL_STR(mwifiex_main_process) },
	{ 0x6219f633, __VMLINUX_SYMBOL_STR(sdio_get_host_pm_caps) },
	{ 0xb859f521, __VMLINUX_SYMBOL_STR(rt_spin_lock) },
	{ 0xcd839d99, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x3c73e696, __VMLINUX_SYMBOL_STR(rt_spin_unlock) },
	{ 0xed19a60d, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xf6cf57a6, __VMLINUX_SYMBOL_STR(mwifiex_add_card) },
	{ 0x18be9363, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x99862c64, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x49608959, __VMLINUX_SYMBOL_STR(migrate_disable) },
	{ 0x89245eb3, __VMLINUX_SYMBOL_STR(kobject_uevent_env) },
	{ 0xd0c7170a, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0xd3f1840e, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x213a4d5, __VMLINUX_SYMBOL_STR(sdio_set_host_pm_flags) },
	{ 0x472668d0, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x29df4bc9, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xc5dddd52, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0x75ead832, __VMLINUX_SYMBOL_STR(mmc_add_host) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xa9ceea38, __VMLINUX_SYMBOL_STR(mmc_remove_host) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4be7fb63, __VMLINUX_SYMBOL_STR(up) },
	{ 0x445593fa, __VMLINUX_SYMBOL_STR(mwifiex_handle_rx_packet) },
	{ 0xf95ad897, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x65b58566, __VMLINUX_SYMBOL_STR(mwifiex_deauthenticate_all) },
	{ 0x720170dc, __VMLINUX_SYMBOL_STR(mwifiex_remove_card) },
	{ 0xcb32260b, __VMLINUX_SYMBOL_STR(mwifiex_enable_hs) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x87038723, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0x4472457d, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x40d9bc6f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x8d07d5b1, __VMLINUX_SYMBOL_STR(mwifiex_init_shutdown_fw) },
	{ 0x7cfb6e13, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0xa22f0c71, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0x6f414bec, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mwifiex";

MODULE_ALIAS("sdio:c*v02DFd9116*");
MODULE_ALIAS("sdio:c*v02DFd9119*");
MODULE_ALIAS("sdio:c*v02DFd9129*");
MODULE_ALIAS("sdio:c*v02DFd912D*");
MODULE_ALIAS("sdio:c*v02DFd9135*");

MODULE_INFO(srcversion, "975BA5FFB7FBF31F2B1AE3F");
