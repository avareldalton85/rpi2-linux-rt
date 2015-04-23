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
	{ 0x772e42be, __VMLINUX_SYMBOL_STR(nf_ct_remove_expectations) },
	{ 0x4d7272e4, __VMLINUX_SYMBOL_STR(migrate_enable) },
	{ 0xa005f817, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x1b826cc0, __VMLINUX_SYMBOL_STR(nf_conntrack_helper_register) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc996d097, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xcf1078d6, __VMLINUX_SYMBOL_STR(__nf_ct_refresh_acct) },
	{ 0x6d8b0361, __VMLINUX_SYMBOL_STR(nf_conntrack_helper_unregister) },
	{ 0xb6db007d, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x71fe2c1f, __VMLINUX_SYMBOL_STR(nf_ct_expect_init) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x60ee9172, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xb859f521, __VMLINUX_SYMBOL_STR(rt_spin_lock) },
	{ 0x3c73e696, __VMLINUX_SYMBOL_STR(rt_spin_unlock) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x7e91ec2, __VMLINUX_SYMBOL_STR(nf_ct_expect_put) },
	{ 0x55f26a78, __VMLINUX_SYMBOL_STR(nf_ct_expect_alloc) },
	{ 0x85f296ba, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0xbe2c0274, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xa9d09347, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x49608959, __VMLINUX_SYMBOL_STR(migrate_disable) },
	{ 0x3ff62317, __VMLINUX_SYMBOL_STR(local_bh_disable) },
	{ 0xc740439, __VMLINUX_SYMBOL_STR(__nf_ct_expect_find) },
	{ 0x65bc2e5b, __VMLINUX_SYMBOL_STR(nf_conntrack_expect_lock) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x799aca4, __VMLINUX_SYMBOL_STR(local_bh_enable) },
	{ 0x75a43658, __VMLINUX_SYMBOL_STR(nf_ct_helper_log) },
	{ 0xaede1c36, __VMLINUX_SYMBOL_STR(nf_afinfo) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x149c7752, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xfd15d2f5, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack";


MODULE_INFO(srcversion, "D6299643A6350AA89468E88");
