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
	{ 0xf95afc31, __VMLINUX_SYMBOL_STR(unregister_quota_format) },
	{ 0xea5ab0f7, __VMLINUX_SYMBOL_STR(register_quota_format) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x67270b8c, __VMLINUX_SYMBOL_STR(dqstats) },
	{ 0x5240ee7, __VMLINUX_SYMBOL_STR(percpu_counter_batch) },
	{ 0xa8b1a189, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x3e80684a, __VMLINUX_SYMBOL_STR(__percpu_counter_add) },
	{ 0x7ce18c9f, __VMLINUX_SYMBOL_STR(from_kqid) },
	{ 0x42792856, __VMLINUX_SYMBOL_STR(__quota_error) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "91C5D2B46FC25240BE72EFF");