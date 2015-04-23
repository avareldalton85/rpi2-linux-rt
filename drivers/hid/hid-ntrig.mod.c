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
	{ 0x149c7752, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xe10be895, __VMLINUX_SYMBOL_STR(hid_unregister_driver) },
	{ 0xe50d1a28, __VMLINUX_SYMBOL_STR(__hid_register_driver) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xd01d57ff, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xc42e3ebc, __VMLINUX_SYMBOL_STR(__hid_request) },
	{ 0x29df4bc9, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x1f061b60, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x81c0ddfb, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x2989b704, __VMLINUX_SYMBOL_STR(hid_connect) },
	{ 0x18be9363, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x5ff45a11, __VMLINUX_SYMBOL_STR(hid_open_report) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x421299b6, __VMLINUX_SYMBOL_STR(hid_disconnect) },
	{ 0xbe45a219, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x74471ffe, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x556680d4, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0003g*v00001B96p00000001");
MODULE_ALIAS("hid:b0003g*v00001B96p00000003");
MODULE_ALIAS("hid:b0003g*v00001B96p00000004");
MODULE_ALIAS("hid:b0003g*v00001B96p00000005");
MODULE_ALIAS("hid:b0003g*v00001B96p00000006");
MODULE_ALIAS("hid:b0003g*v00001B96p00000007");
MODULE_ALIAS("hid:b0003g*v00001B96p00000008");
MODULE_ALIAS("hid:b0003g*v00001B96p00000009");
MODULE_ALIAS("hid:b0003g*v00001B96p0000000A");
MODULE_ALIAS("hid:b0003g*v00001B96p0000000B");
MODULE_ALIAS("hid:b0003g*v00001B96p0000000C");
MODULE_ALIAS("hid:b0003g*v00001B96p0000000D");
MODULE_ALIAS("hid:b0003g*v00001B96p0000000E");
MODULE_ALIAS("hid:b0003g*v00001B96p0000000F");
MODULE_ALIAS("hid:b0003g*v00001B96p00000010");
MODULE_ALIAS("hid:b0003g*v00001B96p00000011");
MODULE_ALIAS("hid:b0003g*v00001B96p00000012");
MODULE_ALIAS("hid:b0003g*v00001B96p00000013");
MODULE_ALIAS("hid:b0003g*v00001B96p00000014");

MODULE_INFO(srcversion, "D5BB5CCF5905C34BA993895");
