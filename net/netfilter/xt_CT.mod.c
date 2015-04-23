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
	{ 0xbb02665d, __VMLINUX_SYMBOL_STR(xt_unregister_targets) },
	{ 0x8014d7af, __VMLINUX_SYMBOL_STR(xt_unregister_target) },
	{ 0x89c1ddf7, __VMLINUX_SYMBOL_STR(xt_register_targets) },
	{ 0x7a4739a, __VMLINUX_SYMBOL_STR(xt_register_target) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x98d86253, __VMLINUX_SYMBOL_STR(nf_conntrack_tmpl_insert) },
	{ 0xba9a0f9b, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xc691eb3f, __VMLINUX_SYMBOL_STR(nf_ct_helper_ext_add) },
	{ 0x733059a7, __VMLINUX_SYMBOL_STR(nf_conntrack_helper_try_module_get) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4d3676aa, __VMLINUX_SYMBOL_STR(__nf_ct_ext_add_length) },
	{ 0xb602c57e, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_module_put) },
	{ 0xa343a1bc, __VMLINUX_SYMBOL_STR(nf_conntrack_free) },
	{ 0x4a25dda0, __VMLINUX_SYMBOL_STR(nf_conntrack_alloc) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x78f9b710, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_try_module_get) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb949e5e6, __VMLINUX_SYMBOL_STR(nf_conntrack_untracked) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,nf_conntrack";


MODULE_INFO(srcversion, "FA12E05CDAA766DB1B0F19D");
