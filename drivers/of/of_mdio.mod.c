#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xb95b937f, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x2661a357, __VMLINUX_SYMBOL_STR(get_phy_device) },
	{ 0x328aeae6, __VMLINUX_SYMBOL_STR(phy_attach_direct) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc062420b, __VMLINUX_SYMBOL_STR(irq_of_parse_and_map) },
	{ 0x4bd36a0d, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xbb106853, __VMLINUX_SYMBOL_STR(of_device_is_compatible) },
	{ 0xc0fa9fde, __VMLINUX_SYMBOL_STR(phy_device_register) },
	{ 0x9363520, __VMLINUX_SYMBOL_STR(phy_device_create) },
	{ 0x736a0d27, __VMLINUX_SYMBOL_STR(phy_device_free) },
	{ 0x18be9363, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xde590270, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0xa8b4c7b6, __VMLINUX_SYMBOL_STR(bus_find_device) },
	{ 0xfb3fb0a7, __VMLINUX_SYMBOL_STR(of_prop_next_string) },
	{ 0x29df4bc9, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x4c96aab1, __VMLINUX_SYMBOL_STR(mdiobus_register) },
	{ 0xd52950c6, __VMLINUX_SYMBOL_STR(phy_connect_direct) },
	{ 0xff411df, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0x517b8674, __VMLINUX_SYMBOL_STR(of_get_next_available_child) },
	{ 0xafe6cdbe, __VMLINUX_SYMBOL_STR(mdio_bus_type) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libphy";


MODULE_INFO(srcversion, "52B09AE3760547FA9AED8EB");
