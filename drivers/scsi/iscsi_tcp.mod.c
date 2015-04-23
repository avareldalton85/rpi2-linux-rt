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
	{ 0x149c7752, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x85c1cc5, __VMLINUX_SYMBOL_STR(iscsi_session_recovery_timedout) },
	{ 0xa857068c, __VMLINUX_SYMBOL_STR(iscsi_tcp_cleanup_task) },
	{ 0xa3d408f0, __VMLINUX_SYMBOL_STR(iscsi_tcp_task_xmit) },
	{ 0x69ef3e4f, __VMLINUX_SYMBOL_STR(iscsi_tcp_task_init) },
	{ 0x332a9cb5, __VMLINUX_SYMBOL_STR(iscsi_conn_send_pdu) },
	{ 0x21e57712, __VMLINUX_SYMBOL_STR(iscsi_host_set_param) },
	{ 0xb2ce89fe, __VMLINUX_SYMBOL_STR(iscsi_session_get_param) },
	{ 0x88444310, __VMLINUX_SYMBOL_STR(iscsi_conn_start) },
	{ 0x94d77e93, __VMLINUX_SYMBOL_STR(iscsi_change_queue_depth) },
	{ 0xd1535c4b, __VMLINUX_SYMBOL_STR(iscsi_target_alloc) },
	{ 0x95cc8b34, __VMLINUX_SYMBOL_STR(iscsi_eh_recover_target) },
	{ 0x19becc71, __VMLINUX_SYMBOL_STR(iscsi_eh_device_reset) },
	{ 0xb78b0428, __VMLINUX_SYMBOL_STR(iscsi_eh_abort) },
	{ 0xd11bf114, __VMLINUX_SYMBOL_STR(iscsi_queuecommand) },
	{ 0xb2b6cb79, __VMLINUX_SYMBOL_STR(iscsi_unregister_transport) },
	{ 0x350d7be8, __VMLINUX_SYMBOL_STR(iscsi_register_transport) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xd6fcf5de, __VMLINUX_SYMBOL_STR(blk_queue_dma_alignment) },
	{ 0x1dbf583, __VMLINUX_SYMBOL_STR(blk_queue_bounce_limit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6f173b09, __VMLINUX_SYMBOL_STR(iscsi_tcp_r2tpool_alloc) },
	{ 0xed9bf093, __VMLINUX_SYMBOL_STR(iscsi_session_setup) },
	{ 0x55be5be1, __VMLINUX_SYMBOL_STR(iscsi_host_add) },
	{ 0x5464b620, __VMLINUX_SYMBOL_STR(iscsi_host_alloc) },
	{ 0xa6defb3a, __VMLINUX_SYMBOL_STR(iscsi_host_free) },
	{ 0xba040d25, __VMLINUX_SYMBOL_STR(iscsi_host_remove) },
	{ 0x9ffd4de7, __VMLINUX_SYMBOL_STR(iscsi_session_teardown) },
	{ 0xc4bea84d, __VMLINUX_SYMBOL_STR(iscsi_tcp_r2tpool_free) },
	{ 0x38b8dc8c, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0xe386b955, __VMLINUX_SYMBOL_STR(crypto_alloc_base) },
	{ 0xbb8c2d7a, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_setup) },
	{ 0xfdd4126, __VMLINUX_SYMBOL_STR(iscsi_tcp_recv_skb) },
	{ 0x5c9dcd5a, __VMLINUX_SYMBOL_STR(tcp_read_sock) },
	{ 0x1a73d81a, __VMLINUX_SYMBOL_STR(iscsi_conn_queue_work) },
	{ 0x1ec5ea56, __VMLINUX_SYMBOL_STR(rt_read_unlock) },
	{ 0xdb772c10, __VMLINUX_SYMBOL_STR(rt_read_lock) },
	{ 0xbf4c2e86, __VMLINUX_SYMBOL_STR(iscsi_tcp_hdr_recv_prep) },
	{ 0xb31257da, __VMLINUX_SYMBOL_STR(sk_set_memalloc) },
	{ 0xac2cc80c, __VMLINUX_SYMBOL_STR(iscsi_conn_bind) },
	{ 0x79dd0695, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0xf0799eb4, __VMLINUX_SYMBOL_STR(iscsi_conn_stop) },
	{ 0xa74250f7, __VMLINUX_SYMBOL_STR(iscsi_suspend_tx) },
	{ 0x6e9ef562, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x5ea1007d, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_teardown) },
	{ 0xb6a3ef49, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xe9773a9a, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xfe5fbc82, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x81a61c2b, __VMLINUX_SYMBOL_STR(rt_write_unlock) },
	{ 0x1fa2a53e, __VMLINUX_SYMBOL_STR(rt_write_lock) },
	{ 0x5bd44c3a, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xb8a26fc3, __VMLINUX_SYMBOL_STR(iscsi_tcp_set_max_r2t) },
	{ 0x4f95b7da, __VMLINUX_SYMBOL_STR(iscsi_set_param) },
	{ 0xb6b0d416, __VMLINUX_SYMBOL_STR(iscsi_conn_get_param) },
	{ 0x94c3ec73, __VMLINUX_SYMBOL_STR(kernel_getpeername) },
	{ 0xbf8c9136, __VMLINUX_SYMBOL_STR(iscsi_conn_get_addr_param) },
	{ 0x799aca4, __VMLINUX_SYMBOL_STR(local_bh_enable) },
	{ 0x4d7272e4, __VMLINUX_SYMBOL_STR(migrate_enable) },
	{ 0x3c73e696, __VMLINUX_SYMBOL_STR(rt_spin_unlock) },
	{ 0xde51105d, __VMLINUX_SYMBOL_STR(kernel_getsockname) },
	{ 0xb859f521, __VMLINUX_SYMBOL_STR(rt_spin_lock) },
	{ 0x49608959, __VMLINUX_SYMBOL_STR(migrate_disable) },
	{ 0x3ff62317, __VMLINUX_SYMBOL_STR(local_bh_disable) },
	{ 0xa1ff1477, __VMLINUX_SYMBOL_STR(iscsi_host_get_param) },
	{ 0x71d7330a, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_get_stats) },
	{ 0xb6154541, __VMLINUX_SYMBOL_STR(iscsi_conn_failure) },
	{ 0x7779e8f2, __VMLINUX_SYMBOL_STR(iscsi_tcp_segment_unmap) },
	{ 0xe52dca19, __VMLINUX_SYMBOL_STR(iscsi_tcp_segment_done) },
	{ 0x2a8f52ec, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe5ef77b3, __VMLINUX_SYMBOL_STR(iscsi_segment_seek_sg) },
	{ 0xfefabb55, __VMLINUX_SYMBOL_STR(iscsi_segment_init_linear) },
	{ 0xc5deb4c, __VMLINUX_SYMBOL_STR(iscsi_tcp_dgst_header) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x961a82b, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libiscsi,libiscsi_tcp";


MODULE_INFO(srcversion, "64A6C06B551F9053FDCD0C6");
