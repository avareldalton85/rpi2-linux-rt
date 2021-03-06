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
	{ 0x1461b1e7, __VMLINUX_SYMBOL_STR(proc_dointvec_minmax) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xed0eb97a, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x55b2bdeb, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xd01d57ff, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x367ba856, __VMLINUX_SYMBOL_STR(__crc32c_le_shift) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x4d7272e4, __VMLINUX_SYMBOL_STR(migrate_enable) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x8ae51120, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x2a8f52ec, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc996d097, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x8b834218, __VMLINUX_SYMBOL_STR(__mutex_do_init) },
	{ 0xde01308f, __VMLINUX_SYMBOL_STR(genl_unregister_family) },
	{ 0xc59f48c6, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x48a3747b, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xac4782c4, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0x43be9120, __VMLINUX_SYMBOL_STR(__skb_dst_set_noref) },
	{ 0xb6db007d, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xd36f9774, __VMLINUX_SYMBOL_STR(icmp_send) },
	{ 0x84fe74c2, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0x6b3e609d, __VMLINUX_SYMBOL_STR(__rt_mutex_init) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x2124474, __VMLINUX_SYMBOL_STR(ip_send_check) },
	{ 0xac1c6b4a, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xb1184c61, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x96cc1a34, __VMLINUX_SYMBOL_STR(_mutex_unlock) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x71fe2c1f, __VMLINUX_SYMBOL_STR(nf_ct_expect_init) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xa8b1a189, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xff280e9c, __VMLINUX_SYMBOL_STR(sock_create_kern) },
	{ 0x24d7b4eb, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x9718b30a, __VMLINUX_SYMBOL_STR(__skb_checksum) },
	{ 0x13ab985b, __VMLINUX_SYMBOL_STR(__genl_register_family) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x32ddd5b6, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0x27000b29, __VMLINUX_SYMBOL_STR(crc32c) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xa2f2a66a, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0x36744310, __VMLINUX_SYMBOL_STR(nf_ct_deliver_cached_events) },
	{ 0xc8276a79, __VMLINUX_SYMBOL_STR(nf_hooks_needed) },
	{ 0xd2e000, __VMLINUX_SYMBOL_STR(__put_net) },
	{ 0x5e03596d, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x40c7247c, __VMLINUX_SYMBOL_STR(si_meminfo) },
	{ 0x149ed814, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xb859f521, __VMLINUX_SYMBOL_STR(rt_spin_lock) },
	{ 0x3aa6c3fe, __VMLINUX_SYMBOL_STR(nf_hook_slow) },
	{ 0xcd839d99, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x3c73e696, __VMLINUX_SYMBOL_STR(rt_spin_unlock) },
	{ 0x183edbbb, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x374a6a7e, __VMLINUX_SYMBOL_STR(ip_defrag) },
	{ 0x4d3676aa, __VMLINUX_SYMBOL_STR(__nf_ct_ext_add_length) },
	{ 0x61da8029, __VMLINUX_SYMBOL_STR(skb_checksum) },
	{ 0x72ea6a79, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0x91827d86, __VMLINUX_SYMBOL_STR(single_open_net) },
	{ 0x1d937aee, __VMLINUX_SYMBOL_STR(__nf_conntrack_confirm) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb99f8fc3, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x49d708fc, __VMLINUX_SYMBOL_STR(inet_addr_type) },
	{ 0xea933c4c, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xd50672f7, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x41977a92, __VMLINUX_SYMBOL_STR(inet_select_addr) },
	{ 0xc5bbd092, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0xc917e655, __VMLINUX_SYMBOL_STR(debug_smp_processor_id) },
	{ 0x7e91ec2, __VMLINUX_SYMBOL_STR(nf_ct_expect_put) },
	{ 0x73685e0d, __VMLINUX_SYMBOL_STR(ip_mc_join_group) },
	{ 0x55f26a78, __VMLINUX_SYMBOL_STR(nf_ct_expect_alloc) },
	{ 0xe5b8f45a, __VMLINUX_SYMBOL_STR(proc_doulongvec_minmax) },
	{ 0x1e092d9c, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xd4249692, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x95ac728c, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0xaffaf221, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x4cd2a3bd, __VMLINUX_SYMBOL_STR(ip_route_me_harder) },
	{ 0x9c09906d, __VMLINUX_SYMBOL_STR(seq_release_net) },
	{ 0xb773b41f, __VMLINUX_SYMBOL_STR(nf_conntrack_alter_reply) },
	{ 0x85f296ba, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x6797ad04, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0xa9d09347, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x49608959, __VMLINUX_SYMBOL_STR(migrate_disable) },
	{ 0xb2464053, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xc7944d35, __VMLINUX_SYMBOL_STR(__rt_spin_lock_init) },
	{ 0xb05fc310, __VMLINUX_SYMBOL_STR(sysctl_rmem_max) },
	{ 0xfac8865f, __VMLINUX_SYMBOL_STR(sysctl_wmem_max) },
	{ 0x93ca735b, __VMLINUX_SYMBOL_STR(ip_local_out_sk) },
	{ 0xba9a0f9b, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x3ff62317, __VMLINUX_SYMBOL_STR(local_bh_disable) },
	{ 0x2430c857, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xa5d22097, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xd9ce8f0c, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0xcf9394a0, __VMLINUX_SYMBOL_STR(sk_release_kernel) },
	{ 0xe851bb05, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xd3e6f60d, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0x9a2a9ca6, __VMLINUX_SYMBOL_STR(nf_unregister_sockopt) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x4f4b221b, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x799aca4, __VMLINUX_SYMBOL_STR(local_bh_enable) },
	{ 0x6843c593, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x2d0909ae, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x271d5849, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xacc76cd0, __VMLINUX_SYMBOL_STR(__dev_get_by_name) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x4c74c361, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xd0a54ee2, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x8ddec23f, __VMLINUX_SYMBOL_STR(kernel_recvmsg) },
	{ 0xa3f76877, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0xaf9a8fe, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0xfee09c47, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x5d5c1efc, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x2d7fd92f, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfbb980ee, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0x89450c3f, __VMLINUX_SYMBOL_STR(genlmsg_put) },
	{ 0xb949e5e6, __VMLINUX_SYMBOL_STR(nf_conntrack_untracked) },
	{ 0xe3900d90, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0xe11967cc, __VMLINUX_SYMBOL_STR(skb_make_writable) },
	{ 0xa8ce6ea4, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x243838f, __VMLINUX_SYMBOL_STR(nf_register_sockopt) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xd0d42c42, __VMLINUX_SYMBOL_STR(mod_timer_pending) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x3b8e878, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x553c36a1, __VMLINUX_SYMBOL_STR(_mutex_lock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x7e0f8b26, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
	{ 0xa2e3b65a, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0x2f1fd3a3, __VMLINUX_SYMBOL_STR(sock_wfree) },
	{ 0xfd15d2f5, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x27fa66e1, __VMLINUX_SYMBOL_STR(nr_free_buffer_pages) },
	{ 0x9272dff0, __VMLINUX_SYMBOL_STR(__ip_select_ident) },
	{ 0x81208c9f, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xabe74122, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x6b08dc58, __VMLINUX_SYMBOL_STR(single_release_net) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack";


MODULE_INFO(srcversion, "99B70DA19E4CBA6D6F5331B");
