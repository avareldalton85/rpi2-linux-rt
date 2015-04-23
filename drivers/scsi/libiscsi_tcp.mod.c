#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xb95b937f, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x7b72b955, __VMLINUX_SYMBOL_STR(pagefault_disable) },
	{ 0x4d7272e4, __VMLINUX_SYMBOL_STR(migrate_enable) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xb1500fc4, __VMLINUX_SYMBOL_STR(skb_seq_read) },
	{ 0x13d0adf7, __VMLINUX_SYMBOL_STR(__kfifo_out) },
	{ 0xec80dffb, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc068440e, __VMLINUX_SYMBOL_STR(__kfifo_alloc) },
	{ 0x961a82b, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x6b3e609d, __VMLINUX_SYMBOL_STR(__rt_mutex_init) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x419f80d5, __VMLINUX_SYMBOL_STR(iscsi_requeue_task) },
	{ 0x3bef2f73, __VMLINUX_SYMBOL_STR(iscsi_pool_init) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xb859f521, __VMLINUX_SYMBOL_STR(rt_spin_lock) },
	{ 0x3c73e696, __VMLINUX_SYMBOL_STR(rt_spin_unlock) },
	{ 0xdf05c823, __VMLINUX_SYMBOL_STR(iscsi_itt_to_ctask) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x6ae857e1, __VMLINUX_SYMBOL_STR(skb_abort_seq_read) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x50a9c801, __VMLINUX_SYMBOL_STR(skb_prepare_seq_read) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x9f2a3eb6, __VMLINUX_SYMBOL_STR(iscsi_conn_teardown) },
	{ 0xb6b1ec77, __VMLINUX_SYMBOL_STR(iscsi_put_task) },
	{ 0x49608959, __VMLINUX_SYMBOL_STR(migrate_disable) },
	{ 0xc7944d35, __VMLINUX_SYMBOL_STR(__rt_spin_lock_init) },
	{ 0x3ff62317, __VMLINUX_SYMBOL_STR(local_bh_disable) },
	{ 0x799aca4, __VMLINUX_SYMBOL_STR(local_bh_enable) },
	{ 0x1bc9239, __VMLINUX_SYMBOL_STR(iscsi_prep_data_out_pdu) },
	{ 0x36257f5e, __VMLINUX_SYMBOL_STR(iscsi_complete_pdu) },
	{ 0xb6154541, __VMLINUX_SYMBOL_STR(iscsi_conn_failure) },
	{ 0xdb760f52, __VMLINUX_SYMBOL_STR(__kfifo_free) },
	{ 0xefdd2345, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xcdfd16a1, __VMLINUX_SYMBOL_STR(__iscsi_complete_pdu) },
	{ 0xf23fcb99, __VMLINUX_SYMBOL_STR(__kfifo_in) },
	{ 0x8d303b1b, __VMLINUX_SYMBOL_STR(iscsi_pool_free) },
	{ 0x1f7a22bc, __VMLINUX_SYMBOL_STR(iscsi_verify_itt) },
	{ 0xbe37c198, __VMLINUX_SYMBOL_STR(iscsi_conn_setup) },
	{ 0x7ebf1d1, __VMLINUX_SYMBOL_STR(iscsi_update_cmdsn) },
	{ 0x872e9dc8, __VMLINUX_SYMBOL_STR(pagefault_enable) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libiscsi";


MODULE_INFO(srcversion, "7B75064F760C2C39C5A4976");
