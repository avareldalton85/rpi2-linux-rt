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
	{ 0x60ee9172, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x1f54e93d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xb2c8749b, __VMLINUX_SYMBOL_STR(param_ops_ulong) },
	{ 0x149c7752, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xd81e63d4, __VMLINUX_SYMBOL_STR(fbtft_write_gpio16_wr_latched) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x715652ca, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x8dbc7cd4, __VMLINUX_SYMBOL_STR(platform_device_register) },
	{ 0xc6318882, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x79da4d08, __VMLINUX_SYMBOL_STR(spi_new_device) },
	{ 0x55c36b7c, __VMLINUX_SYMBOL_STR(device_del) },
	{ 0x472c3c77, __VMLINUX_SYMBOL_STR(bus_find_device_by_name) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xde69d7b7, __VMLINUX_SYMBOL_STR(spi_busnum_to_master) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x11a13e31, __VMLINUX_SYMBOL_STR(_kstrtol) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0x4317da58, __VMLINUX_SYMBOL_STR(platform_bus_type) },
	{ 0xde5badf, __VMLINUX_SYMBOL_STR(spi_bus_type) },
	{ 0x82a456b4, __VMLINUX_SYMBOL_STR(bus_for_each_dev) },
	{ 0x29df4bc9, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xfb80c5bf, __VMLINUX_SYMBOL_STR(fbtft_dbg_hex) },
	{ 0x42ddc6ff, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0xdf2cf4b3, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fbtft";


MODULE_INFO(srcversion, "42360D1CD0E72DEE0838538");
