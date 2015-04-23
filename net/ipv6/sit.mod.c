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
	{ 0x60ee9172, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xacbe82e4, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0x20941632, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x740aab70, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_register) },
	{ 0x8ae51120, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xd50672f7, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0xa5e39e60, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_deregister) },
	{ 0x1ac0f490, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x2f1fd3a3, __VMLINUX_SYMBOL_STR(sock_wfree) },
	{ 0xf89ff816, __VMLINUX_SYMBOL_STR(iptunnel_xmit) },
	{ 0xae87d49, __VMLINUX_SYMBOL_STR(ip_tunnel_encap) },
	{ 0x3b8e878, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xa2f2a66a, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0xcc461b0, __VMLINUX_SYMBOL_STR(neigh_destroy) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0xcdb001f4, __VMLINUX_SYMBOL_STR(ip_tunnel_xmit) },
	{ 0x4c74c361, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0xd01d57ff, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xc5bbd092, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x32ddd5b6, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x85750235, __VMLINUX_SYMBOL_STR(ipv6_chk_prefix) },
	{ 0xcdc33e68, __VMLINUX_SYMBOL_STR(ipv6_chk_custom_prefix) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xcce0378d, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0xc917e655, __VMLINUX_SYMBOL_STR(debug_smp_processor_id) },
	{ 0x18b28f6a, __VMLINUX_SYMBOL_STR(skb_scrub_packet) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x194b0ebf, __VMLINUX_SYMBOL_STR(netdev_state_change) },
	{ 0xd3cea265, __VMLINUX_SYMBOL_STR(ip_tunnel_dst_reset_all) },
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0xcd665361, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0xa3f76877, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0xd47eaa46, __VMLINUX_SYMBOL_STR(ip_tunnel_encap_setup) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x4373c2eb, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x1e092d9c, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x183edbbb, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xbcbb599, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0xb6db007d, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x784eb314, __VMLINUX_SYMBOL_STR(icmpv6_send) },
	{ 0xab4b5cd1, __VMLINUX_SYMBOL_STR(rt6_lookup) },
	{ 0x99862c64, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x98412643, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x84fe74c2, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0x3f9b4248, __VMLINUX_SYMBOL_STR(ip_tunnel_rcv) },
	{ 0x9e660339, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x4f4b221b, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xd8646b9c, __VMLINUX_SYMBOL_STR(iptunnel_pull_header) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xd3e6f60d, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xbded9953, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0xa5a13a99, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x4ef4fb73, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0x6522ce78, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tunnel4,ip_tunnel,ipv6";


MODULE_INFO(srcversion, "8534896E0B3B3160D71B229");
