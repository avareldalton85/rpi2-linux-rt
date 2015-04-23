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
	{ 0x25c0f356, __VMLINUX_SYMBOL_STR(bcma_core_pci_down) },
	{ 0xa179d38, __VMLINUX_SYMBOL_STR(skb_queue_head) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x6b3b5635, __VMLINUX_SYMBOL_STR(ssb_dma_translation) },
	{ 0xb870b280, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0xd01d57ff, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x4d7272e4, __VMLINUX_SYMBOL_STR(migrate_enable) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x45086d53, __VMLINUX_SYMBOL_STR(bcma_pmu_spuravoid_pllupdate) },
	{ 0xec80dffb, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x91eb9b4, __VMLINUX_SYMBOL_STR(round_jiffies) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x46715f0f, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0x23741cd3, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x8b834218, __VMLINUX_SYMBOL_STR(__mutex_do_init) },
	{ 0xcf807b99, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0xdfc23903, __VMLINUX_SYMBOL_STR(bcma_core_pci_irq_ctl) },
	{ 0xec528900, __VMLINUX_SYMBOL_STR(ieee80211_rts_get) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x6b3e609d, __VMLINUX_SYMBOL_STR(__rt_mutex_init) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xb38a675d, __VMLINUX_SYMBOL_STR(ssb_commit_settings) },
	{ 0x21906b1f, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x96cc1a34, __VMLINUX_SYMBOL_STR(_mutex_unlock) },
	{ 0x15078dff, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xa1425906, __VMLINUX_SYMBOL_STR(ieee80211_channel_to_frequency) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x7e51a024, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x24d7b4eb, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x485042a2, __VMLINUX_SYMBOL_STR(ssb_bus_powerup) },
	{ 0x9e009000, __VMLINUX_SYMBOL_STR(wiphy_rfkill_start_polling) },
	{ 0x2b5590d8, __VMLINUX_SYMBOL_STR(__ieee80211_get_assoc_led_name) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xb859f521, __VMLINUX_SYMBOL_STR(rt_spin_lock) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xe759bf02, __VMLINUX_SYMBOL_STR(__ssb_driver_register) },
	{ 0xb71871f6, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0x3c73e696, __VMLINUX_SYMBOL_STR(rt_spin_unlock) },
	{ 0xed19a60d, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xf0eb0dea, __VMLINUX_SYMBOL_STR(ieee80211_stop_queue) },
	{ 0xb8390637, __VMLINUX_SYMBOL_STR(ieee80211_tx_status) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xefaff573, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x251705a, __VMLINUX_SYMBOL_STR(__init_swait_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x56b2766f, __VMLINUX_SYMBOL_STR(ssb_driver_unregister) },
	{ 0xb912bca, __VMLINUX_SYMBOL_STR(bcma_core_pci_up) },
	{ 0x580476d7, __VMLINUX_SYMBOL_STR(bcma_core_dma_translation) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x725ee4af, __VMLINUX_SYMBOL_STR(ieee80211_free_txskb) },
	{ 0x27ec406e, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x4321320e, __VMLINUX_SYMBOL_STR(ssb_device_enable) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x56e31b75, __VMLINUX_SYMBOL_STR(ieee80211_rx) },
	{ 0xa7cbcd15, __VMLINUX_SYMBOL_STR(bcma_core_set_clockmode) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x734239de, __VMLINUX_SYMBOL_STR(__bcma_driver_register) },
	{ 0x99862c64, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xcd4789ab, __VMLINUX_SYMBOL_STR(ieee80211_ctstoself_get) },
	{ 0xef1dfe77, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0x49608959, __VMLINUX_SYMBOL_STR(migrate_disable) },
	{ 0x4c759827, __VMLINUX_SYMBOL_STR(byte_rev_table) },
	{ 0xfba96681, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xc7944d35, __VMLINUX_SYMBOL_STR(__rt_spin_lock_init) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0xa2f98e2c, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x472668d0, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x3ff62317, __VMLINUX_SYMBOL_STR(local_bh_disable) },
	{ 0x5649b67f, __VMLINUX_SYMBOL_STR(bcma_chipco_gpio_control) },
	{ 0x52a3b3a8, __VMLINUX_SYMBOL_STR(__ieee80211_get_rx_led_name) },
	{ 0x814b85e3, __VMLINUX_SYMBOL_STR(bcma_core_is_enabled) },
	{ 0x39b66b41, __VMLINUX_SYMBOL_STR(ssb_pmu_set_ldo_voltage) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xba31f461, __VMLINUX_SYMBOL_STR(ssb_device_disable) },
	{ 0x70ad8c8, __VMLINUX_SYMBOL_STR(bcma_core_enable) },
	{ 0x1bc6ab9, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0x73e9727d, __VMLINUX_SYMBOL_STR(bcma_driver_unregister) },
	{ 0x8060273b, __VMLINUX_SYMBOL_STR(bcma_core_pll_ctl) },
	{ 0x799aca4, __VMLINUX_SYMBOL_STR(local_bh_enable) },
	{ 0xb678366f, __VMLINUX_SYMBOL_STR(int_sqrt) },
	{ 0xb85d5326, __VMLINUX_SYMBOL_STR(hwrng_register) },
	{ 0x9b779a5e, __VMLINUX_SYMBOL_STR(__ieee80211_get_tx_led_name) },
	{ 0xa92f95d7, __VMLINUX_SYMBOL_STR(ssb_set_devtypedata) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6d801192, __VMLINUX_SYMBOL_STR(ieee80211_wake_queue) },
	{ 0xfc4f42b8, __VMLINUX_SYMBOL_STR(ieee80211_generic_frame_duration) },
	{ 0x587fa301, __VMLINUX_SYMBOL_STR(__ieee80211_get_radio_led_name) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x7391c786, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0x30cc6981, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x1eb9516e, __VMLINUX_SYMBOL_STR(round_jiffies_relative) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x2c671ef5, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw) },
	{ 0x99fe34ee, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xdd52e418, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x9eed9fa4, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0xf0098014, __VMLINUX_SYMBOL_STR(ssb_bus_may_powerdown) },
	{ 0x2c4d70ed, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xb742fd7, __VMLINUX_SYMBOL_STR(simple_strtol) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x4c06a631, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x3b8e878, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x553c36a1, __VMLINUX_SYMBOL_STR(_mutex_lock) },
	{ 0x93e1651f, __VMLINUX_SYMBOL_STR(ssb_pmu_set_ldo_paref) },
	{ 0xcc130edc, __VMLINUX_SYMBOL_STR(hwrng_unregister) },
	{ 0x40d9bc6f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xe985fe20, __VMLINUX_SYMBOL_STR(ssb_device_is_enabled) },
	{ 0x42fe2fa, __VMLINUX_SYMBOL_STR(bcma_core_disable) },
	{ 0xfa6adb64, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x5c28cca5, __VMLINUX_SYMBOL_STR(ieee80211_get_tkip_p1k_iv) },
	{ 0x8492a430, __VMLINUX_SYMBOL_STR(ieee80211_get_response_rate) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bcma,ssb,mac80211,cfg80211";

MODULE_ALIAS("bcma:m04BFid0812rev11cl*");
MODULE_ALIAS("bcma:m04BFid0812rev17cl*");
MODULE_ALIAS("bcma:m04BFid0812rev18cl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Ccl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Dcl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Ecl*");
MODULE_ALIAS("bcma:m04BFid0812rev28cl*");
MODULE_ALIAS("bcma:m04BFid0812rev2Acl*");
MODULE_ALIAS("ssb:v4243id0812rev05*");
MODULE_ALIAS("ssb:v4243id0812rev06*");
MODULE_ALIAS("ssb:v4243id0812rev07*");
MODULE_ALIAS("ssb:v4243id0812rev09*");
MODULE_ALIAS("ssb:v4243id0812rev0A*");
MODULE_ALIAS("ssb:v4243id0812rev0B*");
MODULE_ALIAS("ssb:v4243id0812rev0C*");
MODULE_ALIAS("ssb:v4243id0812rev0D*");
MODULE_ALIAS("ssb:v4243id0812rev0F*");
MODULE_ALIAS("ssb:v4243id0812rev10*");

MODULE_INFO(srcversion, "9E324366BDCB63FFD7A5591");
