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
	{ 0x5a86ed6d, __VMLINUX_SYMBOL_STR(inet_unhash) },
	{ 0x2e71ecd8, __VMLINUX_SYMBOL_STR(inet_hash) },
	{ 0x4c50e81, __VMLINUX_SYMBOL_STR(ip_getsockopt) },
	{ 0x135e6ec8, __VMLINUX_SYMBOL_STR(ip_setsockopt) },
	{ 0xcb06e525, __VMLINUX_SYMBOL_STR(udp_ioctl) },
	{ 0x5bd44c3a, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xb6b2a63, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0x40c07f0d, __VMLINUX_SYMBOL_STR(sock_common_recvmsg) },
	{ 0x8614cd32, __VMLINUX_SYMBOL_STR(inet_sendmsg) },
	{ 0x68bfe389, __VMLINUX_SYMBOL_STR(sock_common_getsockopt) },
	{ 0x72b29b57, __VMLINUX_SYMBOL_STR(sock_common_setsockopt) },
	{ 0xed3bf2ae, __VMLINUX_SYMBOL_STR(inet_shutdown) },
	{ 0x570292d7, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0xac111acd, __VMLINUX_SYMBOL_STR(inet_ioctl) },
	{ 0x2d5b1b19, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0xb5bfa6f4, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x95c529fc, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x464f50ba, __VMLINUX_SYMBOL_STR(inet_dgram_connect) },
	{ 0x2e226f7, __VMLINUX_SYMBOL_STR(inet_bind) },
	{ 0xd6afe5cc, __VMLINUX_SYMBOL_STR(inet_release) },
	{ 0x2a59ef1f, __VMLINUX_SYMBOL_STR(inet_del_protocol) },
	{ 0xfefc1123, __VMLINUX_SYMBOL_STR(inet_unregister_protosw) },
	{ 0xbac6fd03, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x747c2431, __VMLINUX_SYMBOL_STR(inet_register_protosw) },
	{ 0x7071cbdc, __VMLINUX_SYMBOL_STR(inet_add_protocol) },
	{ 0x3e8c1352, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x21314bb9, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x183edbbb, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x469de8a8, __VMLINUX_SYMBOL_STR(sk_receive_skb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9e660339, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x24ba5aa5, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find) },
	{ 0x8eecfcef, __VMLINUX_SYMBOL_STR(l2tp_recv_common) },
	{ 0x34908c14, __VMLINUX_SYMBOL_STR(print_hex_dump_bytes) },
	{ 0x516ed742, __VMLINUX_SYMBOL_STR(l2tp_session_find) },
	{ 0x3f5bde81, __VMLINUX_SYMBOL_STR(sk_common_release) },
	{ 0x1fe78881, __VMLINUX_SYMBOL_STR(ip4_datagram_connect) },
	{ 0x58015ff, __VMLINUX_SYMBOL_STR(udp_disconnect) },
	{ 0xe9773a9a, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x2c4f2eaa, __VMLINUX_SYMBOL_STR(l2tp_tunnel_closeall) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x4f4b221b, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x7f5004ed, __VMLINUX_SYMBOL_STR(ip_queue_xmit) },
	{ 0x43be9120, __VMLINUX_SYMBOL_STR(__skb_dst_set_noref) },
	{ 0x9ecfb9ee, __VMLINUX_SYMBOL_STR(__sk_dst_check) },
	{ 0x1a1390f8, __VMLINUX_SYMBOL_STR(sk_setup_caps) },
	{ 0xa3f76877, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x9fb3dd30, __VMLINUX_SYMBOL_STR(memcpy_fromiovec) },
	{ 0x40d9bc6f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x1b47be81, __VMLINUX_SYMBOL_STR(sock_wmalloc) },
	{ 0xc038bc50, __VMLINUX_SYMBOL_STR(ip_cmsg_recv) },
	{ 0x3628801, __VMLINUX_SYMBOL_STR(__sock_recv_wifi_status) },
	{ 0x1cd2a22b, __VMLINUX_SYMBOL_STR(__sock_recv_timestamp) },
	{ 0xdfb18046, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
	{ 0xe4af4d8f, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iovec) },
	{ 0x8c467ea4, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xb6db007d, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x49d708fc, __VMLINUX_SYMBOL_STR(inet_addr_type) },
	{ 0xed0eb97a, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xea933c4c, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x1ec5ea56, __VMLINUX_SYMBOL_STR(rt_read_unlock) },
	{ 0xdb772c10, __VMLINUX_SYMBOL_STR(rt_read_lock) },
	{ 0x799aca4, __VMLINUX_SYMBOL_STR(local_bh_enable) },
	{ 0x81a61c2b, __VMLINUX_SYMBOL_STR(rt_write_unlock) },
	{ 0x1fa2a53e, __VMLINUX_SYMBOL_STR(rt_write_lock) },
	{ 0x3ff62317, __VMLINUX_SYMBOL_STR(local_bh_disable) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_core";


MODULE_INFO(srcversion, "B8AF14056DFA52E9C2A07FD");
