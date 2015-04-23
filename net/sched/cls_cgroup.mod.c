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
	{ 0xeafb6526, __VMLINUX_SYMBOL_STR(unregister_tcf_proto_ops) },
	{ 0x34c55bad, __VMLINUX_SYMBOL_STR(register_tcf_proto_ops) },
	{ 0x5fbbb823, __VMLINUX_SYMBOL_STR(__tcf_em_tree_match) },
	{ 0xc135fe3e, __VMLINUX_SYMBOL_STR(tcf_action_exec) },
	{ 0x1ca742b2, __VMLINUX_SYMBOL_STR(in_serving_softirq) },
	{ 0x793193e7, __VMLINUX_SYMBOL_STR(task_cls_state) },
	{ 0x1fa2ee47, __VMLINUX_SYMBOL_STR(tcf_em_tree_destroy) },
	{ 0xd01d57ff, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe8214184, __VMLINUX_SYMBOL_STR(tcf_exts_destroy) },
	{ 0x799aca4, __VMLINUX_SYMBOL_STR(local_bh_enable) },
	{ 0x4d7272e4, __VMLINUX_SYMBOL_STR(migrate_enable) },
	{ 0x3c73e696, __VMLINUX_SYMBOL_STR(rt_spin_unlock) },
	{ 0xb859f521, __VMLINUX_SYMBOL_STR(rt_spin_lock) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x49608959, __VMLINUX_SYMBOL_STR(migrate_disable) },
	{ 0x3ff62317, __VMLINUX_SYMBOL_STR(local_bh_disable) },
	{ 0xd153949b, __VMLINUX_SYMBOL_STR(tcf_exts_change) },
	{ 0x73ce1feb, __VMLINUX_SYMBOL_STR(tcf_em_tree_validate) },
	{ 0x4a6f1ba, __VMLINUX_SYMBOL_STR(tcf_exts_validate) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x32ddd5b6, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0xcd839d99, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xaf46fc8a, __VMLINUX_SYMBOL_STR(tcf_exts_dump_stats) },
	{ 0x20b11ad9, __VMLINUX_SYMBOL_STR(tcf_em_tree_dump) },
	{ 0x749a7c93, __VMLINUX_SYMBOL_STR(tcf_exts_dump) },
	{ 0x1e092d9c, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "EB5FA4EE5095343B607BDE8");
