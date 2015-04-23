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
	{ 0xe56a9336, __VMLINUX_SYMBOL_STR(snd_pcm_format_width) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x1abcc18e, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xb08f9fda, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0xedb2787a, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0x6758c9e3, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x5b775f25, __VMLINUX_SYMBOL_STR(snd_soc_read) },
	{ 0x18be9363, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x36beba72, __VMLINUX_SYMBOL_STR(snd_soc_update_bits) },
	{ 0xeb5defc1, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xad56a86a, __VMLINUX_SYMBOL_STR(devm_regmap_init_spi) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x72570702, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0xa1f22c42, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x29df4bc9, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x1f8de9a8, __VMLINUX_SYMBOL_STR(devm_regmap_init_i2c) },
	{ 0x6f3571d4, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0x853ebc14, __VMLINUX_SYMBOL_STR(regcache_mark_dirty) },
	{ 0x44c395ef, __VMLINUX_SYMBOL_STR(spi_register_driver) },
	{ 0x53ba07f5, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0xd509d1d5, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x92c212ae, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0x9915fea, __VMLINUX_SYMBOL_STR(snd_soc_write) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core,regmap-spi,regmap-i2c";

MODULE_ALIAS("of:N*T*Cwlf,wm8804*");
MODULE_ALIAS("i2c:wm8804");

MODULE_INFO(srcversion, "52A40E266760FFFE52D648B");
