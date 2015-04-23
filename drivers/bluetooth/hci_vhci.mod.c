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
	{ 0x37a666db, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0x60ee9172, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xf6581b4e, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x50942c4d, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0xd7442057, __VMLINUX_SYMBOL_STR(bt_info) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xa179d38, __VMLINUX_SYMBOL_STR(skb_queue_head) },
	{ 0xa8ce6ea4, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xfee09c47, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x2c4d70ed, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xc636d299, __VMLINUX_SYMBOL_STR(hci_recv_frame) },
	{ 0x99862c64, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x45e1324a, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x39a0025a, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0xaffaf221, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x4f4b221b, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x47022514, __VMLINUX_SYMBOL_STR(bt_err) },
	{ 0x6e9ef562, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x472668d0, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x40d9bc6f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x2e7b04a4, __VMLINUX_SYMBOL_STR(hci_register_dev) },
	{ 0x75206301, __VMLINUX_SYMBOL_STR(hci_alloc_dev) },
	{ 0xa5d22097, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xd01d57ff, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xe851bb05, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x206aecdd, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x9dfba532, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xc7944d35, __VMLINUX_SYMBOL_STR(__rt_spin_lock_init) },
	{ 0x6b3e609d, __VMLINUX_SYMBOL_STR(__rt_mutex_init) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x350d2da7, __VMLINUX_SYMBOL_STR(hci_free_dev) },
	{ 0x9875dfd2, __VMLINUX_SYMBOL_STR(hci_unregister_dev) },
	{ 0x24d7b4eb, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";


MODULE_INFO(srcversion, "96F6D4848B6F3336EF16122");
