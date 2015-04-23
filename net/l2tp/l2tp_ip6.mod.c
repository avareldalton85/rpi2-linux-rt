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
	{ 0xd911cd3, __VMLINUX_SYMBOL_STR(ipv6_getsockopt) },
	{ 0x53aa71d5, __VMLINUX_SYMBOL_STR(ipv6_setsockopt) },
	{ 0xcb06e525, __VMLINUX_SYMBOL_STR(udp_ioctl) },
	{ 0x5bd44c3a, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xb6b2a63, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0x40c07f0d, __VMLINUX_SYMBOL_STR(sock_common_recvmsg) },
	{ 0x8614cd32, __VMLINUX_SYMBOL_STR(inet_sendmsg) },
	{ 0x68bfe389, __VMLINUX_SYMBOL_STR(sock_common_getsockopt) },
	{ 0x72b29b57, __VMLINUX_SYMBOL_STR(sock_common_setsockopt) },
	{ 0xed3bf2ae, __VMLINUX_SYMBOL_STR(inet_shutdown) },
	{ 0x570292d7, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0xbb394911, __VMLINUX_SYMBOL_STR(inet6_ioctl) },
	{ 0x2d5b1b19, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0xb5bfa6f4, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x95c529fc, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x464f50ba, __VMLINUX_SYMBOL_STR(inet_dgram_connect) },
	{ 0x7cea6adf, __VMLINUX_SYMBOL_STR(inet6_bind) },
	{ 0xfd480269, __VMLINUX_SYMBOL_STR(inet6_release) },
	{ 0x2131be80, __VMLINUX_SYMBOL_STR(inet6_del_protocol) },
	{ 0x5294d9a2, __VMLINUX_SYMBOL_STR(inet6_unregister_protosw) },
	{ 0xbac6fd03, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xac696037, __VMLINUX_SYMBOL_STR(inet6_register_protosw) },
	{ 0xf0c034cb, __VMLINUX_SYMBOL_STR(inet6_add_protocol) },
	{ 0x3e8c1352, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xb627b925, __VMLINUX_SYMBOL_STR(ipv6_chk_addr) },
	{ 0x88705164, __VMLINUX_SYMBOL_STR(dev_get_by_index_rcu) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x183edbbb, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x1ec5ea56, __VMLINUX_SYMBOL_STR(rt_read_unlock) },
	{ 0xdb772c10, __VMLINUX_SYMBOL_STR(rt_read_lock) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x469de8a8, __VMLINUX_SYMBOL_STR(sk_receive_skb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9e660339, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x24ba5aa5, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find) },
	{ 0x8eecfcef, __VMLINUX_SYMBOL_STR(l2tp_recv_common) },
	{ 0x34908c14, __VMLINUX_SYMBOL_STR(print_hex_dump_bytes) },
	{ 0x516ed742, __VMLINUX_SYMBOL_STR(l2tp_session_find) },
	{ 0xe0fbc4bf, __VMLINUX_SYMBOL_STR(ip6_datagram_connect) },
	{ 0xa9d09347, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x4f4b221b, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x21314bb9, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x3f5bde81, __VMLINUX_SYMBOL_STR(sk_common_release) },
	{ 0x58015ff, __VMLINUX_SYMBOL_STR(udp_disconnect) },
	{ 0xe9773a9a, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x64c27cec, __VMLINUX_SYMBOL_STR(inet6_destroy_sock) },
	{ 0x2c4f2eaa, __VMLINUX_SYMBOL_STR(l2tp_tunnel_closeall) },
	{ 0x29d4364, __VMLINUX_SYMBOL_STR(ip_generic_getfrag) },
	{ 0xf479d4c2, __VMLINUX_SYMBOL_STR(ip6_dst_hoplimit) },
	{ 0xbcd19b1f, __VMLINUX_SYMBOL_STR(ip6_push_pending_frames) },
	{ 0x66107e27, __VMLINUX_SYMBOL_STR(ip6_flush_pending_frames) },
	{ 0x6e01b43b, __VMLINUX_SYMBOL_STR(ip6_datagram_send_ctl) },
	{ 0xabf5ba25, __VMLINUX_SYMBOL_STR(fl6_sock_lookup) },
	{ 0xb6db007d, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xed0eb97a, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x6f263952, __VMLINUX_SYMBOL_STR(ip6_append_data) },
	{ 0xea933c4c, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x40c99225, __VMLINUX_SYMBOL_STR(ip6_dst_lookup_flow) },
	{ 0xd8525ea7, __VMLINUX_SYMBOL_STR(fl6_update_dst) },
	{ 0x58413099, __VMLINUX_SYMBOL_STR(ipv6_fixup_options) },
	{ 0xc35b45a1, __VMLINUX_SYMBOL_STR(fl6_merge_options) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x2411f45f, __VMLINUX_SYMBOL_STR(ip6_datagram_recv_ctl) },
	{ 0x3628801, __VMLINUX_SYMBOL_STR(__sock_recv_wifi_status) },
	{ 0x1cd2a22b, __VMLINUX_SYMBOL_STR(__sock_recv_timestamp) },
	{ 0x9e4c7fc0, __VMLINUX_SYMBOL_STR(ipv6_recv_error) },
	{ 0xdfb18046, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
	{ 0xe4af4d8f, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iovec) },
	{ 0x8c467ea4, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x799aca4, __VMLINUX_SYMBOL_STR(local_bh_enable) },
	{ 0x81a61c2b, __VMLINUX_SYMBOL_STR(rt_write_unlock) },
	{ 0x1fa2a53e, __VMLINUX_SYMBOL_STR(rt_write_lock) },
	{ 0x3ff62317, __VMLINUX_SYMBOL_STR(local_bh_disable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipv6,l2tp_core";


MODULE_INFO(srcversion, "5CC405FB781B820477BEA33");
