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
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x1daa2089, __VMLINUX_SYMBOL_STR(usb_serial_deregister_drivers) },
	{ 0x35cd2922, __VMLINUX_SYMBOL_STR(usb_serial_register_drivers) },
	{ 0xa2ae6a21, __VMLINUX_SYMBOL_STR(usb_serial_port_softint) },
	{ 0x81c0ddfb, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x7b25f37, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0xed3e9df2, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xa2f98e2c, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0xc7944d35, __VMLINUX_SYMBOL_STR(__rt_spin_lock_init) },
	{ 0x6b3e609d, __VMLINUX_SYMBOL_STR(__rt_mutex_init) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x18be9363, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0xb870b280, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x3b775520, __VMLINUX_SYMBOL_STR(tty_encode_baud_rate) },
	{ 0x30e74134, __VMLINUX_SYMBOL_STR(tty_termios_copy_hw) },
	{ 0xd01d57ff, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xc4ff3d67, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x2a3427b5, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0x42de744b, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_fixed_flag) },
	{ 0x8a2396a, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x4d7272e4, __VMLINUX_SYMBOL_STR(migrate_enable) },
	{ 0x3c73e696, __VMLINUX_SYMBOL_STR(rt_spin_unlock) },
	{ 0xb859f521, __VMLINUX_SYMBOL_STR(rt_spin_lock) },
	{ 0x49608959, __VMLINUX_SYMBOL_STR(migrate_disable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x67b27ec1, __VMLINUX_SYMBOL_STR(tty_std_termios) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v104Fp0004d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "80D4908387EA4695DA7B03F");