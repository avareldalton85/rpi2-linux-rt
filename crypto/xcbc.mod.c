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
	{ 0xbb8dfc0a, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0xcc0b791c, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0x9c6218, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm) },
	{ 0xb6a3ef49, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8810ad5e, __VMLINUX_SYMBOL_STR(crypto_xor) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf54c6d34, __VMLINUX_SYMBOL_STR(shash_free_instance) },
	{ 0x4d9e31da, __VMLINUX_SYMBOL_STR(shash_register_instance) },
	{ 0xd74281a8, __VMLINUX_SYMBOL_STR(crypto_init_spawn) },
	{ 0x8e328b12, __VMLINUX_SYMBOL_STR(crypto_alloc_instance2) },
	{ 0x4e91b347, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0xc2babf82, __VMLINUX_SYMBOL_STR(crypto_attr_alg2) },
	{ 0xd16712f3, __VMLINUX_SYMBOL_STR(crypto_check_attr_type) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "1BEDC0CF46514C80FBB6EAD");
