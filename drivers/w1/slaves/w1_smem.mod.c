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
	{ 0x9131f92, __VMLINUX_SYMBOL_STR(w1_unregister_family) },
	{ 0xedbb9f74, __VMLINUX_SYMBOL_STR(w1_register_family) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wire";


MODULE_INFO(srcversion, "FE65D0F36CC48A14911A9C1");
