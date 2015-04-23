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
	{ 0x61b4d0e4, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x9085f0ac, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x9b25e83e, __VMLINUX_SYMBOL_STR(gpiod_get_raw_value_cansleep) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x74471ffe, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x4d7272e4, __VMLINUX_SYMBOL_STR(migrate_enable) },
	{ 0x3c73e696, __VMLINUX_SYMBOL_STR(rt_spin_unlock) },
	{ 0xb859f521, __VMLINUX_SYMBOL_STR(rt_spin_lock) },
	{ 0x49608959, __VMLINUX_SYMBOL_STR(migrate_disable) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xf95ad897, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xde590270, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x4bd36a0d, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xb7143be9, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0xff411df, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0xbc34e256, __VMLINUX_SYMBOL_STR(of_get_next_child) },
	{ 0x5f8b70de, __VMLINUX_SYMBOL_STR(gpiod_set_debounce) },
	{ 0x18be9363, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x9625352a, __VMLINUX_SYMBOL_STR(gpiod_to_irq) },
	{ 0xdf2cf4b3, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x33b87ef, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0xdc001118, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x1f061b60, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x879a2249, __VMLINUX_SYMBOL_STR(devm_request_any_context_irq) },
	{ 0x752d28fc, __VMLINUX_SYMBOL_STR(devm_add_action) },
	{ 0xeb8d72a4, __VMLINUX_SYMBOL_STR(input_set_capability) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xc7944d35, __VMLINUX_SYMBOL_STR(__rt_spin_lock_init) },
	{ 0x8b834218, __VMLINUX_SYMBOL_STR(__mutex_do_init) },
	{ 0x6b3e609d, __VMLINUX_SYMBOL_STR(__rt_mutex_init) },
	{ 0xb71883e5, __VMLINUX_SYMBOL_STR(devm_input_allocate_device) },
	{ 0xd509d1d5, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x83a476ce, __VMLINUX_SYMBOL_STR(bitmap_scnlistprintf) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x96cc1a34, __VMLINUX_SYMBOL_STR(_mutex_unlock) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0x553c36a1, __VMLINUX_SYMBOL_STR(_mutex_lock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1b015d25, __VMLINUX_SYMBOL_STR(bitmap_parselist) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xbe45a219, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cgpio-keys*");

MODULE_INFO(srcversion, "A0C78CD41A4367A081F9BF6");
