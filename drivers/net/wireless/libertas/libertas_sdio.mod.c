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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x8565bad0, __VMLINUX_SYMBOL_STR(lbs_resume) },
	{ 0xedb3e653, __VMLINUX_SYMBOL_STR(sdio_writesb) },
	{ 0x2ac4c9f6, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0x29640b76, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0x6b3e609d, __VMLINUX_SYMBOL_STR(__rt_mutex_init) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x40cb1012, __VMLINUX_SYMBOL_STR(lbs_stop_card) },
	{ 0xcf1a80fa, __VMLINUX_SYMBOL_STR(netdev_alert) },
	{ 0x2f053e36, __VMLINUX_SYMBOL_STR(__lbs_cmd) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x6219f633, __VMLINUX_SYMBOL_STR(sdio_get_host_pm_caps) },
	{ 0xb859f521, __VMLINUX_SYMBOL_STR(rt_spin_lock) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x3c73e696, __VMLINUX_SYMBOL_STR(rt_spin_unlock) },
	{ 0xed19a60d, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x9dfba532, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x5afd91ea, __VMLINUX_SYMBOL_STR(lbs_start_card) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x18be9363, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x413786cd, __VMLINUX_SYMBOL_STR(lbs_queue_event) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x3fffdf48, __VMLINUX_SYMBOL_STR(lbs_get_firmware_async) },
	{ 0x851b43e1, __VMLINUX_SYMBOL_STR(lbs_cmd_copyback) },
	{ 0x62916c49, __VMLINUX_SYMBOL_STR(lbs_suspend) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x49608959, __VMLINUX_SYMBOL_STR(migrate_disable) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0xc7944d35, __VMLINUX_SYMBOL_STR(__rt_spin_lock_init) },
	{ 0xd0c7170a, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0xd3f1840e, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0xbe0ff44b, __VMLINUX_SYMBOL_STR(lbs_remove_card) },
	{ 0x42cee13b, __VMLINUX_SYMBOL_STR(sdio_f0_writeb) },
	{ 0x213a4d5, __VMLINUX_SYMBOL_STR(sdio_set_host_pm_flags) },
	{ 0x57157d83, __VMLINUX_SYMBOL_STR(lbs_process_rxed_packet) },
	{ 0x29df4bc9, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xc5dddd52, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0x5c236195, __VMLINUX_SYMBOL_STR(lbs_host_to_card_done) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xa03a72e8, __VMLINUX_SYMBOL_STR(sdio_align_size) },
	{ 0x6c3a770b, __VMLINUX_SYMBOL_STR(lbs_add_card) },
	{ 0x1981cc97, __VMLINUX_SYMBOL_STR(sdio_f0_readb) },
	{ 0x75ead832, __VMLINUX_SYMBOL_STR(mmc_add_host) },
	{ 0x9a08450a, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6e9ef562, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xfee09c47, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xa9ceea38, __VMLINUX_SYMBOL_STR(mmc_remove_host) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa8ce6ea4, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x87038723, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0x4472457d, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x40d9bc6f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x7cfb6e13, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0xa22f0c71, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0x6f414bec, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0x3546bdf, __VMLINUX_SYMBOL_STR(lbs_notify_command_response) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libertas";

MODULE_ALIAS("sdio:c*v02DFd9103*");
MODULE_ALIAS("sdio:c*v02DFd9104*");

MODULE_INFO(srcversion, "2E438C6B7372480A3BC4B58");
