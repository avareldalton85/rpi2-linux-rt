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
	{ 0xd01d57ff, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x4d7272e4, __VMLINUX_SYMBOL_STR(migrate_enable) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x47884890, __VMLINUX_SYMBOL_STR(system_power_efficient_wq) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xe225af02, __VMLINUX_SYMBOL_STR(led_trigger_event) },
	{ 0x8b834218, __VMLINUX_SYMBOL_STR(__mutex_do_init) },
	{ 0x37a666db, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0x541653c2, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0x1153e19b, __VMLINUX_SYMBOL_STR(input_unregister_handle) },
	{ 0x65d5283b, __VMLINUX_SYMBOL_STR(led_trigger_register) },
	{ 0x6b3e609d, __VMLINUX_SYMBOL_STR(__rt_mutex_init) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x96cc1a34, __VMLINUX_SYMBOL_STR(_mutex_unlock) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x24d7b4eb, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xdbb475e, __VMLINUX_SYMBOL_STR(input_register_handler) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x206aecdd, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xb859f521, __VMLINUX_SYMBOL_STR(rt_spin_lock) },
	{ 0x3c73e696, __VMLINUX_SYMBOL_STR(rt_spin_unlock) },
	{ 0x9dfba532, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x50942c4d, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x71911077, __VMLINUX_SYMBOL_STR(input_unregister_handler) },
	{ 0x55c36b7c, __VMLINUX_SYMBOL_STR(device_del) },
	{ 0xd9ff1156, __VMLINUX_SYMBOL_STR(input_close_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6c8fe218, __VMLINUX_SYMBOL_STR(led_trigger_unregister) },
	{ 0x8fb68d88, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0xc68aa090, __VMLINUX_SYMBOL_STR(mod_delayed_work_on) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x2c9419f5, __VMLINUX_SYMBOL_STR(input_open_device) },
	{ 0x43bac0c4, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x63f26333, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0x49608959, __VMLINUX_SYMBOL_STR(migrate_disable) },
	{ 0xc7944d35, __VMLINUX_SYMBOL_STR(__rt_spin_lock_init) },
	{ 0xfd6293c2, __VMLINUX_SYMBOL_STR(boot_tvec_bases) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xeb70c169, __VMLINUX_SYMBOL_STR(rt_mutex_destroy) },
	{ 0xc6318882, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xe851bb05, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xb4841185, __VMLINUX_SYMBOL_STR(input_register_handle) },
	{ 0x6e9ef562, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xfee09c47, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x1eb9516e, __VMLINUX_SYMBOL_STR(round_jiffies_relative) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4226ae42, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0xa8ce6ea4, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x553c36a1, __VMLINUX_SYMBOL_STR(_mutex_lock) },
	{ 0x48219419, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x149c7752, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xf6581b4e, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x6c07d933, __VMLINUX_SYMBOL_STR(add_uevent_var) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "4ED979A214A159A7F3963F1");
