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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xb95b937f, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x62a79a6c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x1f54e93d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x149c7752, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x60ee9172, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x61b4d0e4, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xeb5defc1, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x9085f0ac, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x44c395ef, __VMLINUX_SYMBOL_STR(spi_register_driver) },
	{ 0xbcc287eb, __VMLINUX_SYMBOL_STR(fbtft_unregister_framebuffer) },
	{ 0xe5ffef41, __VMLINUX_SYMBOL_STR(fbtft_write_gpio8_wr) },
	{ 0x3c0c8cc8, __VMLINUX_SYMBOL_STR(fbtft_write_vmem16_bus16) },
	{ 0x4bbaff71, __VMLINUX_SYMBOL_STR(fbtft_write_gpio16_wr) },
	{ 0xd81e63d4, __VMLINUX_SYMBOL_STR(fbtft_write_gpio16_wr_latched) },
	{ 0x8a75ee, __VMLINUX_SYMBOL_STR(fbtft_write_reg16_bus16) },
	{ 0x6e33f037, __VMLINUX_SYMBOL_STR(fbtft_write_spi_emulate_9) },
	{ 0xf5f7cc9d, __VMLINUX_SYMBOL_STR(fbtft_write_vmem16_bus8) },
	{ 0xda4b376c, __VMLINUX_SYMBOL_STR(fbtft_register_backlight) },
	{ 0x74b979ec, __VMLINUX_SYMBOL_STR(fbtft_write_vmem16_bus9) },
	{ 0x8d60f09, __VMLINUX_SYMBOL_STR(fbtft_write_reg8_bus9) },
	{ 0x8f6a354f, __VMLINUX_SYMBOL_STR(fbtft_write_reg8_bus8) },
	{ 0x246cc146, __VMLINUX_SYMBOL_STR(fbtft_write_spi) },
	{ 0x1c747f24, __VMLINUX_SYMBOL_STR(fbtft_write_reg16_bus8) },
	{ 0x4d37476d, __VMLINUX_SYMBOL_STR(fbtft_init_display) },
	{ 0xd509d1d5, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xf95ad897, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xd74c9f67, __VMLINUX_SYMBOL_STR(fbtft_framebuffer_release) },
	{ 0x9f5458f9, __VMLINUX_SYMBOL_STR(fbtft_register_framebuffer) },
	{ 0x60ff6f2d, __VMLINUX_SYMBOL_STR(fbtft_framebuffer_alloc) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x18be9363, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x29df4bc9, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fbtft";


MODULE_INFO(srcversion, "41C76BBAEC744DA8B76F2F4");
