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
	{ 0xe2de885f, __VMLINUX_SYMBOL_STR(l2tp_session_delete) },
	{ 0xb6b2a63, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xd6f99adf, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x570292d7, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0xb8aa0cbc, __VMLINUX_SYMBOL_STR(pppox_ioctl) },
	{ 0x2d5b1b19, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0xb5bfa6f4, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x95c529fc, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xee052319, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x9c09906d, __VMLINUX_SYMBOL_STR(seq_release_net) },
	{ 0x5e03596d, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x2d7fd92f, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x337f2432, __VMLINUX_SYMBOL_STR(l2tp_nl_unregister_ops) },
	{ 0xd50672f7, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0xbac6fd03, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xe0ff7a18, __VMLINUX_SYMBOL_STR(unregister_pppox_proto) },
	{ 0x73393470, __VMLINUX_SYMBOL_STR(l2tp_nl_register_ops) },
	{ 0x1a648707, __VMLINUX_SYMBOL_STR(register_pppox_proto) },
	{ 0x3e8c1352, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x8ae51120, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x183edbbb, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x99862c64, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xed3bf2ae, __VMLINUX_SYMBOL_STR(inet_shutdown) },
	{ 0xc423eb10, __VMLINUX_SYMBOL_STR(l2tp_session_set_header_len) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x948998b3, __VMLINUX_SYMBOL_STR(l2tp_session_find_nth) },
	{ 0x4d1945d8, __VMLINUX_SYMBOL_STR(l2tp_session_free) },
	{ 0x48a3747b, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xdf914594, __VMLINUX_SYMBOL_STR(ppp_dev_name) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xac1c6b4a, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x8effc6e9, __VMLINUX_SYMBOL_STR(l2tp_udp_encap_recv) },
	{ 0x39a0025a, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x34738a7b, __VMLINUX_SYMBOL_STR(l2tp_session_queue_purge) },
	{ 0x30643656, __VMLINUX_SYMBOL_STR(__l2tp_session_unhash) },
	{ 0x81a61c2b, __VMLINUX_SYMBOL_STR(rt_write_unlock) },
	{ 0x1fa2a53e, __VMLINUX_SYMBOL_STR(rt_write_lock) },
	{ 0x57eaaed7, __VMLINUX_SYMBOL_STR(pppox_unbind_sock) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xd043a487, __VMLINUX_SYMBOL_STR(__secpath_destroy) },
	{ 0x21314bb9, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf36aee51, __VMLINUX_SYMBOL_STR(ppp_input) },
	{ 0xa003f88c, __VMLINUX_SYMBOL_STR(l2tp_tunnel_create) },
	{ 0xb6db007d, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x244652c0, __VMLINUX_SYMBOL_STR(ppp_register_net_channel) },
	{ 0xed0eb97a, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xea933c4c, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x271d5849, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x799aca4, __VMLINUX_SYMBOL_STR(local_bh_enable) },
	{ 0x658fe98e, __VMLINUX_SYMBOL_STR(l2tp_xmit_skb) },
	{ 0x3ff62317, __VMLINUX_SYMBOL_STR(local_bh_disable) },
	{ 0x9fb3dd30, __VMLINUX_SYMBOL_STR(memcpy_fromiovec) },
	{ 0x40d9bc6f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x1b47be81, __VMLINUX_SYMBOL_STR(sock_wmalloc) },
	{ 0x4f4b221b, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xe4af4d8f, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iovec) },
	{ 0x8c467ea4, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0xceeb13f5, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0x17842c25, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xe9773a9a, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xeec87c54, __VMLINUX_SYMBOL_STR(l2tp_session_create) },
	{ 0x516ed742, __VMLINUX_SYMBOL_STR(l2tp_session_find) },
	{ 0x24ba5aa5, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find) },
	{ 0x5d5c1efc, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x93914a1f, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find_nth) },
	{ 0xfbb980ee, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0xb1184c61, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_core,pppox,l2tp_netlink,ppp_generic";


MODULE_INFO(srcversion, "DC418F2D8B7D415636EA99F");
