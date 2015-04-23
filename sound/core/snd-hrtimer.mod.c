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
	{ 0xd01d57ff, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf1469ff, __VMLINUX_SYMBOL_STR(hrtimer_forward) },
	{ 0xd7c96750, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0xc5a1b78a, __VMLINUX_SYMBOL_STR(snd_timer_global_new) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xb5cb8145, __VMLINUX_SYMBOL_STR(hrtimer_get_res) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1e9faca5, __VMLINUX_SYMBOL_STR(hrtimer_start) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x961500a6, __VMLINUX_SYMBOL_STR(snd_timer_interrupt) },
	{ 0xdc93fa41, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0xfe74bdba, __VMLINUX_SYMBOL_STR(snd_timer_global_register) },
	{ 0x55dfd2df, __VMLINUX_SYMBOL_STR(snd_timer_global_free) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-timer";


MODULE_INFO(srcversion, "D979EA46D5BC342C900747B");
