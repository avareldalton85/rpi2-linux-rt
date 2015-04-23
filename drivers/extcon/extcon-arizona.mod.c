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
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xdc001118, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xda8b9244, __VMLINUX_SYMBOL_STR(arizona_clk32k_enable) },
	{ 0xfd9c0bcd, __VMLINUX_SYMBOL_STR(arizona_request_irq) },
	{ 0xeb8d72a4, __VMLINUX_SYMBOL_STR(input_set_capability) },
	{ 0x33b87ef, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0xb71883e5, __VMLINUX_SYMBOL_STR(devm_input_allocate_device) },
	{ 0xd05578c3, __VMLINUX_SYMBOL_STR(devm_extcon_dev_register) },
	{ 0x99893875, __VMLINUX_SYMBOL_STR(devm_extcon_dev_allocate) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x8b834218, __VMLINUX_SYMBOL_STR(__mutex_do_init) },
	{ 0x6b3e609d, __VMLINUX_SYMBOL_STR(__rt_mutex_init) },
	{ 0xd509d1d5, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x47884890, __VMLINUX_SYMBOL_STR(system_power_efficient_wq) },
	{ 0xe851bb05, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x5391ab43, __VMLINUX_SYMBOL_STR(extcon_update_state) },
	{ 0x74471ffe, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x4e68dfa3, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0xd2af4a73, __VMLINUX_SYMBOL_STR(extcon_get_cable_state_) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x6c279358, __VMLINUX_SYMBOL_STR(regmap_update_bits_check) },
	{ 0x4b0760ef, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0xd55d51d3, __VMLINUX_SYMBOL_STR(snd_soc_dapm_disable_pin) },
	{ 0x80bc184d, __VMLINUX_SYMBOL_STR(snd_soc_dapm_sync) },
	{ 0xb043e1f1, __VMLINUX_SYMBOL_STR(snd_soc_dapm_force_enable_pin) },
	{ 0x8bf7944, __VMLINUX_SYMBOL_STR(extcon_set_cable_state_) },
	{ 0x18be9363, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf95ad897, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x96cc1a34, __VMLINUX_SYMBOL_STR(_mutex_unlock) },
	{ 0x553c36a1, __VMLINUX_SYMBOL_STR(_mutex_lock) },
	{ 0x51175086, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value_cansleep) },
	{ 0xdf2cf4b3, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x267eea4, __VMLINUX_SYMBOL_STR(arizona_clk32k_disable) },
	{ 0x24d7b4eb, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x7be6ab99, __VMLINUX_SYMBOL_STR(arizona_free_irq) },
	{ 0xd44f1018, __VMLINUX_SYMBOL_STR(arizona_set_irq_wake) },
	{ 0xceb35698, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=extcon-class,snd-soc-core";


MODULE_INFO(srcversion, "EC34A4E89F86601DF13A2F8");
