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
	{ 0x628c1987, __VMLINUX_SYMBOL_STR(netlink_kernel_release) },
	{ 0xa9d09347, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x708521a8, __VMLINUX_SYMBOL_STR(__netlink_kernel_create) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x6797ad04, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xa5d22097, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xcd839d99, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xec26c07a, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x682d275e, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
	{ 0x91724d14, __VMLINUX_SYMBOL_STR(crypto_lookup_aead) },
	{ 0xde552dc8, __VMLINUX_SYMBOL_STR(crypto_alg_mod_lookup) },
	{ 0x4e91b347, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0x9680892f, __VMLINUX_SYMBOL_STR(crypto_lookup_skcipher) },
	{ 0x4efcd5f6, __VMLINUX_SYMBOL_STR(crypto_unregister_instance) },
	{ 0x3de9cae1, __VMLINUX_SYMBOL_STR(crypto_remove_final) },
	{ 0x599ada5c, __VMLINUX_SYMBOL_STR(rt_up_write) },
	{ 0xc07bcedc, __VMLINUX_SYMBOL_STR(crypto_remove_spawns) },
	{ 0xb9174c35, __VMLINUX_SYMBOL_STR(rt_down_write) },
	{ 0xd9ce8f0c, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0xe5a4d794, __VMLINUX_SYMBOL_STR(netlink_capable) },
	{ 0x65ecad3b, __VMLINUX_SYMBOL_STR(crypto_alg_sem) },
	{ 0x457594fa, __VMLINUX_SYMBOL_STR(crypto_alg_list) },
	{ 0x80a472f5, __VMLINUX_SYMBOL_STR(rt_up_read) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xd8db05ff, __VMLINUX_SYMBOL_STR(rt_down_read) },
	{ 0x1e092d9c, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x96cc1a34, __VMLINUX_SYMBOL_STR(_mutex_unlock) },
	{ 0xb1c4d836, __VMLINUX_SYMBOL_STR(netlink_rcv_skb) },
	{ 0x553c36a1, __VMLINUX_SYMBOL_STR(_mutex_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "EB5365E4F00804BE59E16BD");
