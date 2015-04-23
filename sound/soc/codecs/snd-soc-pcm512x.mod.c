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
	{ 0xc63e49e2, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0x69fda1d6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xa853eecd, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xb08f9fda, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0xedb2787a, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0x6758c9e3, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0x18be9363, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x72570702, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0x29df4bc9, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xf6ac75ba, __VMLINUX_SYMBOL_STR(snd_soc_get_enum_double) },
	{ 0xebd16564, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x47f9e91a, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x6f3571d4, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0x853ebc14, __VMLINUX_SYMBOL_STR(regcache_mark_dirty) },
	{ 0x1361e204, __VMLINUX_SYMBOL_STR(snd_soc_put_enum_double) },
	{ 0x53ba07f5, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0xd509d1d5, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xceb35698, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0x4b0760ef, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x67e4843a, __VMLINUX_SYMBOL_STR(regcache_cache_only) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core";


MODULE_INFO(srcversion, "F6F69DCE67A387628ADCFE8");
