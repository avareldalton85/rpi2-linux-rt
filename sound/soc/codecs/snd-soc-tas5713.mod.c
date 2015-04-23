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
	{ 0xc80904b6, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x1abcc18e, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xb08f9fda, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0xedb2787a, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0x18be9363, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x36beba72, __VMLINUX_SYMBOL_STR(snd_soc_update_bits) },
	{ 0x72570702, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0xa1f22c42, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x1f8de9a8, __VMLINUX_SYMBOL_STR(devm_regmap_init_i2c) },
	{ 0x6f3571d4, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x53ba07f5, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0xd509d1d5, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x4b0760ef, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x9915fea, __VMLINUX_SYMBOL_STR(snd_soc_write) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,regmap-i2c";

MODULE_ALIAS("i2c:tas5713");
MODULE_ALIAS("of:N*T*Cti,tas5713*");

MODULE_INFO(srcversion, "AC467F097EFFEB7CA51A43B");
