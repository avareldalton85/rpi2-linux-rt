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
	{ 0x4d7272e4, __VMLINUX_SYMBOL_STR(migrate_enable) },
	{ 0xa005f817, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0x1b826cc0, __VMLINUX_SYMBOL_STR(nf_conntrack_helper_register) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc996d097, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xc7524510, __VMLINUX_SYMBOL_STR(nf_ct_gre_keymap_add) },
	{ 0x6d8b0361, __VMLINUX_SYMBOL_STR(nf_conntrack_helper_unregister) },
	{ 0x71fe2c1f, __VMLINUX_SYMBOL_STR(nf_ct_expect_init) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xb859f521, __VMLINUX_SYMBOL_STR(rt_spin_lock) },
	{ 0x3c73e696, __VMLINUX_SYMBOL_STR(rt_spin_unlock) },
	{ 0xd43bd4ac, __VMLINUX_SYMBOL_STR(nf_ct_expect_find_get) },
	{ 0x7e91ec2, __VMLINUX_SYMBOL_STR(nf_ct_expect_put) },
	{ 0x55f26a78, __VMLINUX_SYMBOL_STR(nf_ct_expect_alloc) },
	{ 0x85f296ba, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x49608959, __VMLINUX_SYMBOL_STR(migrate_disable) },
	{ 0x2fec5730, __VMLINUX_SYMBOL_STR(nf_ct_gre_keymap_destroy) },
	{ 0x3ff62317, __VMLINUX_SYMBOL_STR(local_bh_disable) },
	{ 0x799aca4, __VMLINUX_SYMBOL_STR(local_bh_enable) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xfd15d2f5, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xabe74122, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0x90ff6c9f, __VMLINUX_SYMBOL_STR(nf_ct_invert_tuplepr) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_conntrack_proto_gre";


MODULE_INFO(srcversion, "1F4194E44C5CFCB02080F0F");
