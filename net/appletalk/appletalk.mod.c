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
	{ 0xed0eb97a, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xd01d57ff, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x7b72b955, __VMLINUX_SYMBOL_STR(pagefault_disable) },
	{ 0xceeb13f5, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x4d655c17, __VMLINUX_SYMBOL_STR(seq_open_private) },
	{ 0xec80dffb, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6eac0dd, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0x62bc33b1, __VMLINUX_SYMBOL_STR(seq_release_private) },
	{ 0xb4ecb235, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0xc59f48c6, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0x56f90e59, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0x48a3747b, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xac4782c4, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x1fa2a53e, __VMLINUX_SYMBOL_STR(rt_write_lock) },
	{ 0x98412643, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x3ea4f6e1, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0x6b3e609d, __VMLINUX_SYMBOL_STR(__rt_mutex_init) },
	{ 0xac1c6b4a, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xb1184c61, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x21314bb9, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x1ec5ea56, __VMLINUX_SYMBOL_STR(rt_read_unlock) },
	{ 0x8c467ea4, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x75bda77a, __VMLINUX_SYMBOL_STR(seq_hlist_next) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xdb772c10, __VMLINUX_SYMBOL_STR(rt_read_lock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xa2f2a66a, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0x5e03596d, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xcd839d99, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x5bd44c3a, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x183edbbb, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x9206fed3, __VMLINUX_SYMBOL_STR(sock_get_timestamp) },
	{ 0xb6b2a63, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x39a0025a, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x95c529fc, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xe4efd2e8, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x17842c25, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xea933c4c, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x3dfc897c, __VMLINUX_SYMBOL_STR(seq_hlist_start_head) },
	{ 0x570292d7, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xaffaf221, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xb5bfa6f4, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0xe9773a9a, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x441f3c11, __VMLINUX_SYMBOL_STR(dev_remove_pack) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xbe2c0274, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x99862c64, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xa9d09347, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x6d22f676, __VMLINUX_SYMBOL_STR(register_snap_client) },
	{ 0xd6f99adf, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0xc7944d35, __VMLINUX_SYMBOL_STR(__rt_spin_lock_init) },
	{ 0x472668d0, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x3ff62317, __VMLINUX_SYMBOL_STR(local_bh_disable) },
	{ 0x3e8c1352, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x81a61c2b, __VMLINUX_SYMBOL_STR(rt_write_unlock) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xa5d22097, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x26c0a066, __VMLINUX_SYMBOL_STR(sock_get_timestampns) },
	{ 0x2d5b1b19, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0x1ab4a500, __VMLINUX_SYMBOL_STR(sock_register) },
	{ 0x4f4b221b, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xbac6fd03, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x799aca4, __VMLINUX_SYMBOL_STR(local_bh_enable) },
	{ 0xa5a13a99, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x9cce99fd, __VMLINUX_SYMBOL_STR(sock_alloc_send_skb) },
	{ 0xacc76cd0, __VMLINUX_SYMBOL_STR(__dev_get_by_name) },
	{ 0xe4af4d8f, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iovec) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x5d5c1efc, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x2d7fd92f, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x62737e1d, __VMLINUX_SYMBOL_STR(sock_unregister) },
	{ 0xf262db90, __VMLINUX_SYMBOL_STR(unregister_snap_client) },
	{ 0x9fb3dd30, __VMLINUX_SYMBOL_STR(memcpy_fromiovec) },
	{ 0x8b618d08, __VMLINUX_SYMBOL_STR(overflowuid) },
	{ 0x2c4d70ed, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xdda7d40, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0x9264d222, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0x3b8e878, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x5e2f582b, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x7e0f8b26, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
	{ 0x40d9bc6f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xa2e3b65a, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0x872e9dc8, __VMLINUX_SYMBOL_STR(pagefault_enable) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xcc2eb014, __VMLINUX_SYMBOL_STR(sock_i_uid) },
	{ 0x326b9f48, __VMLINUX_SYMBOL_STR(dev_mc_add_global) },
	{ 0xdfb18046, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=psnap";


MODULE_INFO(srcversion, "467714EAA03EC6924B63854");
