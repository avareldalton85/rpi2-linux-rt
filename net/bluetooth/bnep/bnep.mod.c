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
	{ 0xceeb13f5, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x2a8f52ec, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0x79dd0695, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb4ecb235, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0x56f90e59, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0xc9891e43, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xbb06602b, __VMLINUX_SYMBOL_STR(eth_change_mtu) },
	{ 0x1fa2a53e, __VMLINUX_SYMBOL_STR(rt_write_lock) },
	{ 0x381bf1ae, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x60ee9172, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x54a82d19, __VMLINUX_SYMBOL_STR(bt_sock_register) },
	{ 0x80a472f5, __VMLINUX_SYMBOL_STR(rt_up_read) },
	{ 0x149ed814, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0xafe8542e, __VMLINUX_SYMBOL_STR(sock_no_poll) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x47022514, __VMLINUX_SYMBOL_STR(bt_err) },
	{ 0xd7442057, __VMLINUX_SYMBOL_STR(bt_info) },
	{ 0x183edbbb, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xb6b2a63, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xfd69acba, __VMLINUX_SYMBOL_STR(sock_no_recvmsg) },
	{ 0x1c871eca, __VMLINUX_SYMBOL_STR(bt_sock_unlink) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x17bc97e9, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0x95c529fc, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xcf1572f5, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x17842c25, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xee052319, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xcc1fb551, __VMLINUX_SYMBOL_STR(baswap) },
	{ 0x4ef4fb73, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xbded9953, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x570292d7, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xb5bfa6f4, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0xe9773a9a, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x8fea24bd, __VMLINUX_SYMBOL_STR(bt_sock_unregister) },
	{ 0x99862c64, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xa9d09347, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xfe5fbc82, __VMLINUX_SYMBOL_STR(fput) },
	{ 0xb9174c35, __VMLINUX_SYMBOL_STR(rt_down_write) },
	{ 0xd6f99adf, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0xbaad17c7, __VMLINUX_SYMBOL_STR(bt_sock_link) },
	{ 0xba9a0f9b, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x472668d0, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x3ff62317, __VMLINUX_SYMBOL_STR(local_bh_disable) },
	{ 0x3e8c1352, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x81a61c2b, __VMLINUX_SYMBOL_STR(rt_write_unlock) },
	{ 0xa5d22097, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x4f4b221b, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xbac6fd03, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xa5a13a99, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x799aca4, __VMLINUX_SYMBOL_STR(local_bh_enable) },
	{ 0x50d11cb7, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x98c31dd5, __VMLINUX_SYMBOL_STR(__module_put_and_exit) },
	{ 0x6843c593, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x599ada5c, __VMLINUX_SYMBOL_STR(rt_up_write) },
	{ 0x481f57e, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0xaf9a8fe, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x6e9ef562, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb6374f7d, __VMLINUX_SYMBOL_STR(sock_no_connect) },
	{ 0xbc658dfe, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xfc7558b0, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x76d9bf11, __VMLINUX_SYMBOL_STR(crc32_be) },
	{ 0xaddce8f6, __VMLINUX_SYMBOL_STR(sock_no_sendmsg) },
	{ 0xfc74818f, __VMLINUX_SYMBOL_STR(set_user_nice) },
	{ 0xfe33fe1c, __VMLINUX_SYMBOL_STR(bt_procfs_init) },
	{ 0x2c4d70ed, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x77f1f9a9, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x5642e5d2, __VMLINUX_SYMBOL_STR(bt_procfs_cleanup) },
	{ 0xd8db05ff, __VMLINUX_SYMBOL_STR(rt_down_read) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";


MODULE_INFO(srcversion, "FB20D6DE19CA6D270447300");
