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
	{ 0x4d7272e4, __VMLINUX_SYMBOL_STR(migrate_enable) },
	{ 0xbc2be482, __VMLINUX_SYMBOL_STR(irlmp_data_request) },
	{ 0x168e9a45, __VMLINUX_SYMBOL_STR(irlmp_open_lsap) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6eac0dd, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0x33cbe2c6, __VMLINUX_SYMBOL_STR(proc_irda) },
	{ 0xcfcae3a7, __VMLINUX_SYMBOL_STR(irttp_close_tsap) },
	{ 0xe6255ac3, __VMLINUX_SYMBOL_STR(irlmp_close_lsap) },
	{ 0x98412643, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xac1c6b4a, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xe97a56c5, __VMLINUX_SYMBOL_STR(irttp_connect_request) },
	{ 0xb1184c61, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x10697e20, __VMLINUX_SYMBOL_STR(irttp_data_request) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x26990538, __VMLINUX_SYMBOL_STR(irlmp_connect_response) },
	{ 0x5e03596d, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xcff2aa1b, __VMLINUX_SYMBOL_STR(irlmp_disconnect_request) },
	{ 0xb859f521, __VMLINUX_SYMBOL_STR(rt_spin_lock) },
	{ 0xcd839d99, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x3c73e696, __VMLINUX_SYMBOL_STR(rt_spin_unlock) },
	{ 0x13751ff0, __VMLINUX_SYMBOL_STR(irttp_disconnect_request) },
	{ 0x8695b9a8, __VMLINUX_SYMBOL_STR(hashbin_new) },
	{ 0xbdf7308a, __VMLINUX_SYMBOL_STR(hashbin_delete) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x80f557c2, __VMLINUX_SYMBOL_STR(hashbin_remove) },
	{ 0xa51581a, __VMLINUX_SYMBOL_STR(hashbin_get_next) },
	{ 0xd4249692, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xaffaf221, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x99862c64, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x49608959, __VMLINUX_SYMBOL_STR(migrate_disable) },
	{ 0xbdd7ac4b, __VMLINUX_SYMBOL_STR(irttp_connect_response) },
	{ 0xa5d22097, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x6b415b72, __VMLINUX_SYMBOL_STR(hashbin_get_first) },
	{ 0x640a53f1, __VMLINUX_SYMBOL_STR(irda_notify_init) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xb7838f35, __VMLINUX_SYMBOL_STR(irlmp_connect_request) },
	{ 0x5d5c1efc, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x2d7fd92f, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd9028897, __VMLINUX_SYMBOL_STR(irttp_open_tsap) },
	{ 0x31ab1d20, __VMLINUX_SYMBOL_STR(hashbin_lock_find) },
	{ 0x9264d222, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0x3b8e878, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x935df576, __VMLINUX_SYMBOL_STR(irttp_flow_request) },
	{ 0xa2e5d48e, __VMLINUX_SYMBOL_STR(hashbin_insert) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=irda";


MODULE_INFO(srcversion, "5BF93DED4154EB5AAC9234A");
