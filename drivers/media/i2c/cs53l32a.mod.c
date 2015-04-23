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
	{ 0xa63022fd, __VMLINUX_SYMBOL_STR(v4l2_subdev_querymenu) },
	{ 0xd722a960, __VMLINUX_SYMBOL_STR(v4l2_subdev_try_ext_ctrls) },
	{ 0xde65e05, __VMLINUX_SYMBOL_STR(v4l2_subdev_s_ext_ctrls) },
	{ 0xdb74570f, __VMLINUX_SYMBOL_STR(v4l2_subdev_g_ext_ctrls) },
	{ 0xe92420c, __VMLINUX_SYMBOL_STR(v4l2_subdev_s_ctrl) },
	{ 0xa2ca290, __VMLINUX_SYMBOL_STR(v4l2_subdev_g_ctrl) },
	{ 0xae767c44, __VMLINUX_SYMBOL_STR(v4l2_subdev_queryctrl) },
	{ 0x1abcc18e, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xa1f22c42, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x337af589, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0xed4c54a6, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x747c7d97, __VMLINUX_SYMBOL_STR(v4l2_i2c_subdev_init) },
	{ 0xd509d1d5, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x9d6cd8bd, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_log_status) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x31b8d6f4, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0xdb521aaf, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xbfc65e92, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x9300a6ed, __VMLINUX_SYMBOL_STR(v4l2_device_unregister_subdev) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,v4l2-common";

MODULE_ALIAS("i2c:cs53l32a");

MODULE_INFO(srcversion, "A3241C8E47E7F9E5E27E36A");
