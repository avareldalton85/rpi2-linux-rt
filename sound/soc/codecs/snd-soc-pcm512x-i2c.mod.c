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
	{ 0x1abcc18e, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x41b587c7, __VMLINUX_SYMBOL_STR(pcm512x_regmap) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x91e5de74, __VMLINUX_SYMBOL_STR(pcm512x_pm_ops) },
	{ 0xa1f22c42, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x6013d68, __VMLINUX_SYMBOL_STR(pcm512x_probe) },
	{ 0x1f8de9a8, __VMLINUX_SYMBOL_STR(devm_regmap_init_i2c) },
	{ 0x77dd7337, __VMLINUX_SYMBOL_STR(pcm512x_remove) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-pcm512x,regmap-i2c";

MODULE_ALIAS("of:N*T*Cti,pcm5121*");
MODULE_ALIAS("of:N*T*Cti,pcm5122*");
MODULE_ALIAS("i2c:pcm5121");
MODULE_ALIAS("i2c:pcm5122");

MODULE_INFO(srcversion, "73DD8A3271AF3BD50B3F350");
