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
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xf5c375fb, __VMLINUX_SYMBOL_STR(can_rx_register) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4b95605c, __VMLINUX_SYMBOL_STR(can_proto_unregister) },
	{ 0x1fa2a53e, __VMLINUX_SYMBOL_STR(rt_write_lock) },
	{ 0x98412643, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x21314bb9, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x8c467ea4, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x5bd44c3a, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xb6b2a63, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x95c529fc, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xea933c4c, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x570292d7, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0xb5bfa6f4, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0xb5be845c, __VMLINUX_SYMBOL_STR(__sock_tx_timestamp) },
	{ 0xe9773a9a, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x12d489cf, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0xa9d09347, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xd6f99adf, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x6b11ea8d, __VMLINUX_SYMBOL_STR(can_ioctl) },
	{ 0x3f656628, __VMLINUX_SYMBOL_STR(can_send) },
	{ 0x7c9f7384, __VMLINUX_SYMBOL_STR(__sock_recv_ts_and_drops) },
	{ 0x3ff62317, __VMLINUX_SYMBOL_STR(local_bh_disable) },
	{ 0x81a61c2b, __VMLINUX_SYMBOL_STR(rt_write_unlock) },
	{ 0x9ceb163c, __VMLINUX_SYMBOL_STR(memcpy_toiovec) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x2d5b1b19, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0x4f4b221b, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x799aca4, __VMLINUX_SYMBOL_STR(local_bh_enable) },
	{ 0xdb769cc, __VMLINUX_SYMBOL_STR(can_proto_register) },
	{ 0x9cce99fd, __VMLINUX_SYMBOL_STR(sock_alloc_send_skb) },
	{ 0xb6374f7d, __VMLINUX_SYMBOL_STR(sock_no_connect) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9fb3dd30, __VMLINUX_SYMBOL_STR(memcpy_fromiovec) },
	{ 0xe2e8065e, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0x69e0201b, __VMLINUX_SYMBOL_STR(can_rx_unregister) },
	{ 0x40d9bc6f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xdfb18046, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can";


MODULE_INFO(srcversion, "01D45DC3AEAD211B1B42BF6");
