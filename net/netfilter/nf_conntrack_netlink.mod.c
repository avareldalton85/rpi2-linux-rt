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
	{ 0x72ea6a79, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x451271c3, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_unregister) },
	{ 0x2d0909ae, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xde959e81, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_register) },
	{ 0x772e42be, __VMLINUX_SYMBOL_STR(nf_ct_remove_expectations) },
	{ 0x5a794f9a, __VMLINUX_SYMBOL_STR(__nf_ct_try_assign_helper) },
	{ 0xa343a1bc, __VMLINUX_SYMBOL_STR(nf_conntrack_free) },
	{ 0x10ece94, __VMLINUX_SYMBOL_STR(nf_conntrack_hash_check_insert) },
	{ 0xe4689576, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0x4d3676aa, __VMLINUX_SYMBOL_STR(__nf_ct_ext_add_length) },
	{ 0xc691eb3f, __VMLINUX_SYMBOL_STR(nf_ct_helper_ext_add) },
	{ 0x4a25dda0, __VMLINUX_SYMBOL_STR(nf_conntrack_alloc) },
	{ 0x62f2d0e5, __VMLINUX_SYMBOL_STR(nfnetlink_parse_nat_setup_hook) },
	{ 0x5ce3b588, __VMLINUX_SYMBOL_STR(nfnl_lock) },
	{ 0xdb065657, __VMLINUX_SYMBOL_STR(nfnl_unlock) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc88f405c, __VMLINUX_SYMBOL_STR(nf_ct_expect_register_notifier) },
	{ 0x414fc822, __VMLINUX_SYMBOL_STR(nf_conntrack_register_notifier) },
	{ 0xa02bfd42, __VMLINUX_SYMBOL_STR(nfnetlink_has_listeners) },
	{ 0x914db49f, __VMLINUX_SYMBOL_STR(nfnetlink_send) },
	{ 0xabb5b694, __VMLINUX_SYMBOL_STR(nfnetlink_set_err) },
	{ 0x818269b7, __VMLINUX_SYMBOL_STR(nf_conntrack_unregister_notifier) },
	{ 0xe0311121, __VMLINUX_SYMBOL_STR(nf_ct_expect_unregister_notifier) },
	{ 0xbe2c0274, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xc740439, __VMLINUX_SYMBOL_STR(__nf_ct_expect_find) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x85f296ba, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x426e9a35, __VMLINUX_SYMBOL_STR(__nf_conntrack_helper_find) },
	{ 0xaa415e9a, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_find_by_name) },
	{ 0x55f26a78, __VMLINUX_SYMBOL_STR(nf_ct_expect_alloc) },
	{ 0x1785cdaf, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_find_by_symbol) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xc18ac88d, __VMLINUX_SYMBOL_STR(nf_ct_expect_hsize) },
	{ 0x65bc2e5b, __VMLINUX_SYMBOL_STR(nf_conntrack_expect_lock) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x5a5536a6, __VMLINUX_SYMBOL_STR(nf_ct_unlink_expect_report) },
	{ 0xd43bd4ac, __VMLINUX_SYMBOL_STR(nf_ct_expect_find_get) },
	{ 0x7e91ec2, __VMLINUX_SYMBOL_STR(nf_ct_expect_put) },
	{ 0xadbc7d13, __VMLINUX_SYMBOL_STR(nf_connlabels_replace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd01d57ff, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x4f4b221b, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x6797ad04, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xa5d22097, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9216c473, __VMLINUX_SYMBOL_STR(nf_conntrack_flush_report) },
	{ 0x14593a41, __VMLINUX_SYMBOL_STR(nf_ct_delete) },
	{ 0xc996d097, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xabe74122, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0x347013de, __VMLINUX_SYMBOL_STR(nla_validate) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xe1e0d2c3, __VMLINUX_SYMBOL_STR(nf_conntrack_locks) },
	{ 0xb859f521, __VMLINUX_SYMBOL_STR(rt_spin_lock) },
	{ 0x49608959, __VMLINUX_SYMBOL_STR(migrate_disable) },
	{ 0x3ff62317, __VMLINUX_SYMBOL_STR(local_bh_disable) },
	{ 0x799aca4, __VMLINUX_SYMBOL_STR(local_bh_enable) },
	{ 0x4d7272e4, __VMLINUX_SYMBOL_STR(migrate_enable) },
	{ 0x3c73e696, __VMLINUX_SYMBOL_STR(rt_spin_unlock) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x989c1547, __VMLINUX_SYMBOL_STR(nf_conntrack_l3proto_generic) },
	{ 0x48b274b7, __VMLINUX_SYMBOL_STR(nf_ct_l3protos) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x5eb73670, __VMLINUX_SYMBOL_STR(__nf_ct_l4proto_find) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xd3e6f60d, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xcd839d99, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xec26c07a, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x1e092d9c, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x682d275e, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfnetlink,nf_conntrack";


MODULE_INFO(srcversion, "D98DDB2E323C93CD0B535A3");
