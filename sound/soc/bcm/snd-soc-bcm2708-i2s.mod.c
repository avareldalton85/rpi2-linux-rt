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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x361c8d48, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x4e68dfa3, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x2d54c1d3, __VMLINUX_SYMBOL_STR(snd_soc_register_component) },
	{ 0xaf8aa518, __VMLINUX_SYMBOL_STR(system_rev) },
	{ 0x9085f0ac, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xf518b821, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_unregister) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x18be9363, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd4a3af61, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_prepare_slave_config) },
	{ 0x2120eb8f, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x3b54147f, __VMLINUX_SYMBOL_STR(snd_soc_unregister_component) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xf8506afa, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_register) },
	{ 0x32b2e626, __VMLINUX_SYMBOL_STR(devm_regmap_init_mmio_clk) },
	{ 0x61b4d0e4, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xd509d1d5, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xceb35698, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0x4b0760ef, __VMLINUX_SYMBOL_STR(regmap_write) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,regmap-mmio";

MODULE_ALIAS("of:N*T*Cbrcm,bcm2708-i2s*");

MODULE_INFO(srcversion, "0C2B307EB115D62F34F022C");
