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
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0xa2196b3f, __VMLINUX_SYMBOL_STR(unregister_ip_vs_scheduler) },
	{ 0xe002bc82, __VMLINUX_SYMBOL_STR(register_ip_vs_scheduler) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x486b1c19, __VMLINUX_SYMBOL_STR(ip_vs_scheduler_err) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_vs";


MODULE_INFO(srcversion, "35EB602EFDB554EEDF9C94E");
