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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x1b8d48b9, __VMLINUX_SYMBOL_STR(ath9k_hw_set_txq_props) },
	{ 0x9a377a30, __VMLINUX_SYMBOL_STR(ath9k_hw_init) },
	{ 0xd01d57ff, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x4d7272e4, __VMLINUX_SYMBOL_STR(migrate_enable) },
	{ 0xc2a8cd34, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_channel) },
	{ 0xc535a85d, __VMLINUX_SYMBOL_STR(ath9k_hw_deinit) },
	{ 0x55c6bce3, __VMLINUX_SYMBOL_STR(ath9k_hw_cfg_output) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xbd5cda7, __VMLINUX_SYMBOL_STR(device_release_driver) },
	{ 0x5ac051d4, __VMLINUX_SYMBOL_STR(ath9k_hw_set_gpio) },
	{ 0x411679f4, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_crypto) },
	{ 0x46715f0f, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0xafb3c3fa, __VMLINUX_SYMBOL_STR(ath9k_cmn_process_rate) },
	{ 0x23741cd3, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x8b834218, __VMLINUX_SYMBOL_STR(__mutex_do_init) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0xe7b9488a, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_enable) },
	{ 0x23e3d396, __VMLINUX_SYMBOL_STR(ath9k_hw_wait) },
	{ 0xc5c2e9b6, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_hw_crypto_keytype) },
	{ 0xf52fd232, __VMLINUX_SYMBOL_STR(ath9k_hw_stopdmarecv) },
	{ 0x843b2491, __VMLINUX_SYMBOL_STR(ath_key_delete) },
	{ 0x11dc42cd, __VMLINUX_SYMBOL_STR(ath9k_cmn_update_txpow) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x6b3e609d, __VMLINUX_SYMBOL_STR(__rt_mutex_init) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x21906b1f, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0x8f75ee4e, __VMLINUX_SYMBOL_STR(ath9k_hw_gpio_get) },
	{ 0x4b8d7afd, __VMLINUX_SYMBOL_STR(ath_regd_init) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xed3e9df2, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x96cc1a34, __VMLINUX_SYMBOL_STR(_mutex_unlock) },
	{ 0x15078dff, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x7e51a024, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x24d7b4eb, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x32f704a2, __VMLINUX_SYMBOL_STR(ieee80211_iterate_active_interfaces_atomic) },
	{ 0xf8bb3834, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxfilter) },
	{ 0x64a7f2a4, __VMLINUX_SYMBOL_STR(ath9k_hw_get_txq_props) },
	{ 0xd56b9af4, __VMLINUX_SYMBOL_STR(ath9k_hw_releasetxqueue) },
	{ 0xb1a89bcb, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_tsf) },
	{ 0x9e009000, __VMLINUX_SYMBOL_STR(wiphy_rfkill_start_polling) },
	{ 0xa2c89631, __VMLINUX_SYMBOL_STR(ath9k_cmn_reload_chainmask) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x7f1b9f31, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_channels_rates) },
	{ 0xb859f521, __VMLINUX_SYMBOL_STR(rt_spin_lock) },
	{ 0xcd839d99, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x618c2271, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0x3c73e696, __VMLINUX_SYMBOL_STR(rt_spin_unlock) },
	{ 0xfe1c09d8, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0xf111a55d, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0xed19a60d, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xb8390637, __VMLINUX_SYMBOL_STR(ieee80211_tx_status) },
	{ 0x3179c21a, __VMLINUX_SYMBOL_STR(ath_printk) },
	{ 0x9dfba532, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x21555418, __VMLINUX_SYMBOL_STR(ath9k_hw_setopmode) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xefaff573, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x69a3c8ee, __VMLINUX_SYMBOL_STR(ath9k_hw_disable) },
	{ 0x251705a, __VMLINUX_SYMBOL_STR(__init_swait_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xed501f33, __VMLINUX_SYMBOL_STR(ath9k_hw_resettxqueue) },
	{ 0x1f90e88a, __VMLINUX_SYMBOL_STR(ath9k_hw_gettsf64) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x18be9363, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x5197cd8d, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x85b1fbd7, __VMLINUX_SYMBOL_STR(ath9k_hw_set_sta_beacon_timers) },
	{ 0xfebdf61b, __VMLINUX_SYMBOL_STR(ath9k_hw_set_tsfadjust) },
	{ 0x8917d70a, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_ap) },
	{ 0x27ec406e, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x567af6ae, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_disable) },
	{ 0xb902392d, __VMLINUX_SYMBOL_STR(ath9k_hw_getrxfilter) },
	{ 0x92503825, __VMLINUX_SYMBOL_STR(ath9k_hw_ani_monitor) },
	{ 0xdd559e2c, __VMLINUX_SYMBOL_STR(ath_is_mybeacon) },
	{ 0xfd03ce9e, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_adhoc) },
	{ 0x81c0ddfb, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xac3e67d4, __VMLINUX_SYMBOL_STR(ath9k_cmn_process_rssi) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xaafdb617, __VMLINUX_SYMBOL_STR(ath_is_world_regd) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x56e31b75, __VMLINUX_SYMBOL_STR(ieee80211_rx) },
	{ 0xaffaf221, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x99862c64, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xfae48877, __VMLINUX_SYMBOL_STR(wiphy_rfkill_stop_polling) },
	{ 0xef1dfe77, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0x49608959, __VMLINUX_SYMBOL_STR(migrate_disable) },
	{ 0x29701f10, __VMLINUX_SYMBOL_STR(ath9k_hw_write_associd) },
	{ 0xfba96681, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0xc7944d35, __VMLINUX_SYMBOL_STR(__rt_spin_lock_init) },
	{ 0x39a8cf29, __VMLINUX_SYMBOL_STR(ath_reg_notifier_apply) },
	{ 0x36c5295f, __VMLINUX_SYMBOL_STR(wiphy_to_ieee80211_hw) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xedb277d7, __VMLINUX_SYMBOL_STR(ath9k_hw_init_btcoex_hw) },
	{ 0xe7ebe312, __VMLINUX_SYMBOL_STR(ieee80211_stop_tx_ba_cb_irqsafe) },
	{ 0x472668d0, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x3ff62317, __VMLINUX_SYMBOL_STR(local_bh_disable) },
	{ 0x9028b084, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconq_setup) },
	{ 0x29df4bc9, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x8a2396a, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x9f8cbcc6, __VMLINUX_SYMBOL_STR(ath9k_hw_name) },
	{ 0xf3541761, __VMLINUX_SYMBOL_STR(ath9k_hw_init_global_settings) },
	{ 0xa5d22097, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x6e20935b, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x152859d8, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0x5ff731e5, __VMLINUX_SYMBOL_STR(ath9k_hw_settsf64) },
	{ 0x1bc6ab9, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xc4ff3d67, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0xd0b730a8, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x4f4b221b, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x85ada006, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconinit) },
	{ 0x799aca4, __VMLINUX_SYMBOL_STR(local_bh_enable) },
	{ 0xc94903f4, __VMLINUX_SYMBOL_STR(ieee80211_find_sta) },
	{ 0xbf6a802, __VMLINUX_SYMBOL_STR(ieee80211_get_buffered_bc) },
	{ 0xb6109470, __VMLINUX_SYMBOL_STR(usb_interrupt_msg) },
	{ 0xaea7d30f, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_bt_stomp) },
	{ 0x99436fdd, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxabort) },
	{ 0xe13582b1, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_sta) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x4eaca291, __VMLINUX_SYMBOL_STR(ath_hw_setbssidmask) },
	{ 0x2a6bb1f0, __VMLINUX_SYMBOL_STR(ath9k_cmn_rx_skb_postprocess) },
	{ 0xeb1a26c7, __VMLINUX_SYMBOL_STR(ath9k_hw_phy_disable) },
	{ 0xebc8316, __VMLINUX_SYMBOL_STR(ieee80211_get_hdrlen_from_skb) },
	{ 0x3f53a987, __VMLINUX_SYMBOL_STR(ath9k_hw_setpower) },
	{ 0xaad24708, __VMLINUX_SYMBOL_STR(__ieee80211_create_tpt_led_trigger) },
	{ 0x7391c786, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0x30cc6981, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0xa9e2a609, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_set_weight) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc6d676d9, __VMLINUX_SYMBOL_STR(regulatory_hint) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe5b52c99, __VMLINUX_SYMBOL_STR(ath9k_hw_setmcastfilter) },
	{ 0xb96a25f3, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_session) },
	{ 0x2c671ef5, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw) },
	{ 0x550245dc, __VMLINUX_SYMBOL_STR(ath9k_hw_startpcureceive) },
	{ 0x65336801, __VMLINUX_SYMBOL_STR(ath9k_hw_setuptxqueue) },
	{ 0x43d1951f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x69d053f5, __VMLINUX_SYMBOL_STR(ath9k_hw_reset) },
	{ 0x9eed9fa4, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0x5f9f74f4, __VMLINUX_SYMBOL_STR(ath9k_cmn_rx_accept) },
	{ 0x2c4d70ed, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x71c3cea9, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x4c06a631, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xc679d47e, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_3wire) },
	{ 0x553c36a1, __VMLINUX_SYMBOL_STR(_mutex_lock) },
	{ 0xfb8a969d, __VMLINUX_SYMBOL_STR(ath_key_config) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x40d9bc6f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x7792392e, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x149c7752, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x4bcc4bb7, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_calvalid) },
	{ 0xe3e878e7, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xfa6adb64, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x1a413212, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_cb_irqsafe) },
	{ 0x25c6369f, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0x3cd4e86a, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ath9k_hw,ath9k_common,mac80211,ath,cfg80211";

MODULE_ALIAS("usb:v0CF3p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9030d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3327d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3328d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3346d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3348d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3349d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3350d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp4605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v040Dp3801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8403d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApA704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p017Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp3904d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p20FFd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "FFDC0522A2A7173FD414686");
