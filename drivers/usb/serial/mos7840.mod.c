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
	{ 0x3c431d79, __VMLINUX_SYMBOL_STR(usb_serial_generic_get_icount) },
	{ 0xe5be7dc4, __VMLINUX_SYMBOL_STR(usb_serial_generic_tiocmiwait) },
	{ 0x1daa2089, __VMLINUX_SYMBOL_STR(usb_serial_deregister_drivers) },
	{ 0x35cd2922, __VMLINUX_SYMBOL_STR(usb_serial_register_drivers) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x2a3427b5, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0x42de744b, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_fixed_flag) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xc7944d35, __VMLINUX_SYMBOL_STR(__rt_spin_lock_init) },
	{ 0x6b3e609d, __VMLINUX_SYMBOL_STR(__rt_mutex_init) },
	{ 0xed3e9df2, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x409873e3, __VMLINUX_SYMBOL_STR(tty_termios_baud_rate) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xe3e878e7, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x18be9363, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8a2396a, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x3cd4e86a, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x7b25f37, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0x1e4cc93b, __VMLINUX_SYMBOL_STR(tty_port_tty_wakeup) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x4d7272e4, __VMLINUX_SYMBOL_STR(migrate_enable) },
	{ 0x3c73e696, __VMLINUX_SYMBOL_STR(rt_spin_unlock) },
	{ 0xb859f521, __VMLINUX_SYMBOL_STR(rt_spin_lock) },
	{ 0x49608959, __VMLINUX_SYMBOL_STR(migrate_disable) },
	{ 0xd01d57ff, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x81c0ddfb, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x6e9ef562, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v9710p7840d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9710p7820d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9710p7810d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pAC22d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pBC00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pAC24d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pBC01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pAC29d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pAC30d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pAC31d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pAC32d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pAC42d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pBC02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pAC44d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pBC03d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pAC24d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p7820d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "39A80A4A7FD9882A8E3178C");
