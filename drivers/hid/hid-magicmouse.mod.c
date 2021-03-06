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
	{ 0x60ee9172, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x7bd7229e, __VMLINUX_SYMBOL_STR(param_get_uint) },
	{ 0xe10be895, __VMLINUX_SYMBOL_STR(hid_unregister_driver) },
	{ 0xe50d1a28, __VMLINUX_SYMBOL_STR(__hid_register_driver) },
	{ 0x8daa09a, __VMLINUX_SYMBOL_STR(input_alloc_absinfo) },
	{ 0x556680d4, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0xff64e64b, __VMLINUX_SYMBOL_STR(input_mt_init_slots) },
	{ 0x421299b6, __VMLINUX_SYMBOL_STR(hid_disconnect) },
	{ 0x558a2490, __VMLINUX_SYMBOL_STR(hid_register_report) },
	{ 0x2989b704, __VMLINUX_SYMBOL_STR(hid_connect) },
	{ 0x18be9363, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x5ff45a11, __VMLINUX_SYMBOL_STR(hid_open_report) },
	{ 0xd509d1d5, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xf95ad897, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xad315804, __VMLINUX_SYMBOL_STR(input_mt_report_pointer_emulation) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x34b51391, __VMLINUX_SYMBOL_STR(input_mt_report_slot_state) },
	{ 0x74471ffe, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0005g*v000005ACp0000030D");
MODULE_ALIAS("hid:b0005g*v000005ACp0000030E");

MODULE_INFO(srcversion, "82EC3C8182A4D3D14382C69");
