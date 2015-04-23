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
	{ 0x61b4d0e4, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x9085f0ac, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xebbb8389, __VMLINUX_SYMBOL_STR(stmpe_reg_read) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xe851bb05, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x74471ffe, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x5c33fb12, __VMLINUX_SYMBOL_STR(stmpe_block_read) },
	{ 0x24d7b4eb, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x18be9363, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x4bd36a0d, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xdc001118, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x556680d4, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0xa13341e6, __VMLINUX_SYMBOL_STR(stmpe_reg_write) },
	{ 0xfec40014, __VMLINUX_SYMBOL_STR(stmpe_set_bits) },
	{ 0x22bf1051, __VMLINUX_SYMBOL_STR(stmpe_enable) },
	{ 0x70d53e1d, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xb71883e5, __VMLINUX_SYMBOL_STR(devm_input_allocate_device) },
	{ 0xd509d1d5, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x31161190, __VMLINUX_SYMBOL_STR(platform_get_irq_byname) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x3b66e6e5, __VMLINUX_SYMBOL_STR(stmpe_disable) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "DD5A25AC2620156FB56376C");
