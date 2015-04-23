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
	{ 0x42ddc6ff, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0x550a4e76, __VMLINUX_SYMBOL_STR(gpiod_direction_output_raw) },
	{ 0xdf2cf4b3, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x29df4bc9, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x4d86b5b5, __VMLINUX_SYMBOL_STR(gpiochip_find) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x50934c4b, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x4c06a631, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x69fda1d6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0xf970dc0a, __VMLINUX_SYMBOL_STR(devm_spi_register_master) },
	{ 0xc6318882, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x18be9363, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x70d53e1d, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xebd16564, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0xc062420b, __VMLINUX_SYMBOL_STR(irq_of_parse_and_map) },
	{ 0x47f9e91a, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x361c8d48, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x2120eb8f, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xb09f4f64, __VMLINUX_SYMBOL_STR(spi_alloc_master) },
	{ 0xc63e49e2, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xa853eecd, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-spi*");

MODULE_INFO(srcversion, "E7A1EE39E5A0C5B6C15A111");
