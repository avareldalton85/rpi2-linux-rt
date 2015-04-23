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
	{ 0xc63e49e2, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0x81f9c654, __VMLINUX_SYMBOL_STR(__gpiod_get_index) },
	{ 0xe56a9336, __VMLINUX_SYMBOL_STR(snd_pcm_format_width) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x58541add, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_pointer_no_residue) },
	{ 0xb870b280, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0xd01d57ff, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x2441fb59, __VMLINUX_SYMBOL_STR(perf_tp_event) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x20b46ae4, __VMLINUX_SYMBOL_STR(of_property_read_string_helper) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x47884890, __VMLINUX_SYMBOL_STR(system_power_efficient_wq) },
	{ 0x69fda1d6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0xf5b0606a, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0xa286a234, __VMLINUX_SYMBOL_STR(snd_pcm_format_name) },
	{ 0x857327ae, __VMLINUX_SYMBOL_STR(__rt_rwsem_init) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x61720b68, __VMLINUX_SYMBOL_STR(regmap_raw_write) },
	{ 0xd0ee38b8, __VMLINUX_SYMBOL_STR(schedule_timeout_uninterruptible) },
	{ 0x8b834218, __VMLINUX_SYMBOL_STR(__mutex_do_init) },
	{ 0xd9cdf7b4, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0x12db1702, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_set_config_from_dai_data) },
	{ 0xe0054399, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_msbits) },
	{ 0x1178e1b6, __VMLINUX_SYMBOL_STR(pinctrl_select_state) },
	{ 0xc210232b, __VMLINUX_SYMBOL_STR(snd_pcm_lib_preallocate_free_for_all) },
	{ 0xa853eecd, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x47229b5c, __VMLINUX_SYMBOL_STR(gpio_request) },
	{ 0x80b61973, __VMLINUX_SYMBOL_STR(devm_pinctrl_get) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0xdf2cf4b3, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x6b3e609d, __VMLINUX_SYMBOL_STR(__rt_mutex_init) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x4bd36a0d, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x96cc1a34, __VMLINUX_SYMBOL_STR(_mutex_unlock) },
	{ 0xe61343c3, __VMLINUX_SYMBOL_STR(regmap_update_bits_check_async) },
	{ 0xe93e49c3, __VMLINUX_SYMBOL_STR(devres_free) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x24d7b4eb, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x4e68dfa3, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x245394d0, __VMLINUX_SYMBOL_STR(snd_pcm_lib_preallocate_pages) },
	{ 0xe5026343, __VMLINUX_SYMBOL_STR(platform_device_register_full) },
	{ 0x792cfbc6, __VMLINUX_SYMBOL_STR(snd_hwparams_to_dma_slave_config) },
	{ 0x501cdebe, __VMLINUX_SYMBOL_STR(blocking_notifier_chain_unregister) },
	{ 0x271b80a5, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x3a628df4, __VMLINUX_SYMBOL_STR(snd_compress_new) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x61d8199e, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0xcc2e09e, __VMLINUX_SYMBOL_STR(pinctrl_lookup_state) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x9085f0ac, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x7a2c797e, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_pointer) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x6c279358, __VMLINUX_SYMBOL_STR(regmap_update_bits_check) },
	{ 0x733c3b54, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0x56631104, __VMLINUX_SYMBOL_STR(regmap_parse_val) },
	{ 0xced5ecf5, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_open) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0x2f0e86d7, __VMLINUX_SYMBOL_STR(debugfs_create_u32) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5e25fb42, __VMLINUX_SYMBOL_STR(trace_define_field) },
	{ 0x486151e5, __VMLINUX_SYMBOL_STR(ftrace_event_buffer_commit) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x4d0989c8, __VMLINUX_SYMBOL_STR(dma_request_slave_channel_reason) },
	{ 0x3dcfef3, __VMLINUX_SYMBOL_STR(dma_request_slave_channel) },
	{ 0x8f045d1c, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x6c34749f, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x18be9363, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x397d0922, __VMLINUX_SYMBOL_STR(regmap_async_complete) },
	{ 0x11a13e31, __VMLINUX_SYMBOL_STR(_kstrtol) },
	{ 0xc917e655, __VMLINUX_SYMBOL_STR(debug_smp_processor_id) },
	{ 0xfac91730, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0xde590270, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0xfa180a29, __VMLINUX_SYMBOL_STR(of_property_read_string) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xcaa212c3, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9ce3c184, __VMLINUX_SYMBOL_STR(dev_get_regmap) },
	{ 0xe5680c54, __VMLINUX_SYMBOL_STR(devres_alloc) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0x6b30b9f0, __VMLINUX_SYMBOL_STR(gpiod_direction_input) },
	{ 0xfd59c7ee, __VMLINUX_SYMBOL_STR(snd_jack_new) },
	{ 0x6462fa57, __VMLINUX_SYMBOL_STR(snd_pcm_lib_free_pages) },
	{ 0x1c132024, __VMLINUX_SYMBOL_STR(request_any_context_irq) },
	{ 0x715652ca, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x550a4e76, __VMLINUX_SYMBOL_STR(gpiod_direction_output_raw) },
	{ 0x185e1f34, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0x43bac0c4, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x2c4d252a, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0xe35994c9, __VMLINUX_SYMBOL_STR(debugfs_create_bool) },
	{ 0xc162886f, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_request_channel) },
	{ 0x7b962e96, __VMLINUX_SYMBOL_STR(snd_pcm_lib_malloc_pages) },
	{ 0xf1452464, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0xa2f98e2c, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0xb26a17a3, __VMLINUX_SYMBOL_STR(ftrace_event_reg) },
	{ 0xb1c0c1c2, __VMLINUX_SYMBOL_STR(async_schedule_domain) },
	{ 0xba9a0f9b, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x76d451c4, __VMLINUX_SYMBOL_STR(add_taint) },
	{ 0x29df4bc9, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xd439a0be, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_close) },
	{ 0x62c9058b, __VMLINUX_SYMBOL_STR(gpiod_unexport) },
	{ 0xc6318882, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xe851bb05, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xa097de70, __VMLINUX_SYMBOL_STR(snd_pcm_stream_lock_irq) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x8e9e1cac, __VMLINUX_SYMBOL_STR(blocking_notifier_call_chain) },
	{ 0x226fa3c6, __VMLINUX_SYMBOL_STR(snd_pcm_stream_unlock_irq) },
	{ 0x7cb5dc96, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0x74ce05b8, __VMLINUX_SYMBOL_STR(flush_delayed_work) },
	{ 0xebd16564, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0xb7143be9, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0x173af7da, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_get_chan) },
	{ 0xab5cf914, __VMLINUX_SYMBOL_STR(blocking_notifier_chain_register) },
	{ 0xff411df, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0xc584e005, __VMLINUX_SYMBOL_STR(snd_pcm_new_internal) },
	{ 0x783c1338, __VMLINUX_SYMBOL_STR(devres_add) },
	{ 0x47f9e91a, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x39bbf3d3, __VMLINUX_SYMBOL_STR(snd_ctl_free_one) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x4fc00d51, __VMLINUX_SYMBOL_STR(ftrace_event_buffer_reserve) },
	{ 0x7afa89fc, __VMLINUX_SYMBOL_STR(vsnprintf) },
	{ 0xb4d605b0, __VMLINUX_SYMBOL_STR(event_triggers_call) },
	{ 0xfe990052, __VMLINUX_SYMBOL_STR(gpio_free) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x68a24153, __VMLINUX_SYMBOL_STR(snd_pcm_format_physical_width) },
	{ 0x4b377434, __VMLINUX_SYMBOL_STR(dma_release_channel) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6ca4bf88, __VMLINUX_SYMBOL_STR(async_synchronize_full_domain) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x2ce61f3e, __VMLINUX_SYMBOL_STR(gpiod_export) },
	{ 0x9625352a, __VMLINUX_SYMBOL_STR(gpiod_to_irq) },
	{ 0x2641a01d, __VMLINUX_SYMBOL_STR(trace_event_raw_init) },
	{ 0x4226ae42, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0xbed24d81, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_minmax) },
	{ 0xd788742d, __VMLINUX_SYMBOL_STR(perf_trace_buf_prepare) },
	{ 0xe924636d, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_trigger) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0xc0a0eb2e, __VMLINUX_SYMBOL_STR(of_parse_phandle_with_args) },
	{ 0x4808f992, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0xf95ad897, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x2111b637, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x137db25d, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0x54028546, __VMLINUX_SYMBOL_STR(regmap_raw_read) },
	{ 0x2a66f48c, __VMLINUX_SYMBOL_STR(snd_pcm_limit_hw_rates) },
	{ 0x8187f893, __VMLINUX_SYMBOL_STR(snd_jack_report) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x47304b91, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0x1e3a88fb, __VMLINUX_SYMBOL_STR(trace_seq_printf) },
	{ 0x553c36a1, __VMLINUX_SYMBOL_STR(_mutex_lock) },
	{ 0xd7a30076, __VMLINUX_SYMBOL_STR(snd_ctl_add) },
	{ 0x61b4d0e4, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xa0f60be1, __VMLINUX_SYMBOL_STR(regmap_get_val_bytes) },
	{ 0x48219419, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0xd509d1d5, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x111275d6, __VMLINUX_SYMBOL_STR(devm_gpio_request) },
	{ 0x4b0760ef, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x6f8aa4a0, __VMLINUX_SYMBOL_STR(gpiod_put) },
	{ 0xbffcff3a, __VMLINUX_SYMBOL_STR(ftrace_raw_output_prep) },
	{ 0xab8bc1a2, __VMLINUX_SYMBOL_STR(snd_pcm_rate_mask_intersect) },
	{ 0x81208c9f, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xb859f38b, __VMLINUX_SYMBOL_STR(krealloc) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xce05b1dc, __VMLINUX_SYMBOL_STR(gpiod_get_value_cansleep) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-pcm-dmaengine,snd-compress,snd";


MODULE_INFO(srcversion, "0A0098483C4F33FADA56D1B");