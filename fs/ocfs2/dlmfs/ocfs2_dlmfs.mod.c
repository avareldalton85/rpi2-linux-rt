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
	{ 0x55b2bdeb, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xd01d57ff, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x4d7272e4, __VMLINUX_SYMBOL_STR(migrate_enable) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x67efd0a2, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x269d63fd, __VMLINUX_SYMBOL_STR(ocfs2_cluster_disconnect) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x34184afe, __VMLINUX_SYMBOL_STR(current_kernel_time) },
	{ 0x9b12321b, __VMLINUX_SYMBOL_STR(simple_lookup) },
	{ 0x6b3e609d, __VMLINUX_SYMBOL_STR(__rt_mutex_init) },
	{ 0xa61a8d19, __VMLINUX_SYMBOL_STR(generic_delete_inode) },
	{ 0xd60100b6, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0x90cf4165, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x424241c9, __VMLINUX_SYMBOL_STR(ocfs2_dlm_lvb) },
	{ 0x9f466dba, __VMLINUX_SYMBOL_STR(igrab) },
	{ 0x32ddd5b6, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0x2b4d3c00, __VMLINUX_SYMBOL_STR(mount_nodev) },
	{ 0xb859f521, __VMLINUX_SYMBOL_STR(rt_spin_lock) },
	{ 0x3c73e696, __VMLINUX_SYMBOL_STR(rt_spin_unlock) },
	{ 0x9dfba532, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xce61cbba, __VMLINUX_SYMBOL_STR(kill_litter_super) },
	{ 0x6c34749f, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc917e655, __VMLINUX_SYMBOL_STR(debug_smp_processor_id) },
	{ 0xd431cd1b, __VMLINUX_SYMBOL_STR(bdi_init) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x95ac728c, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x55b95ab2, __VMLINUX_SYMBOL_STR(setattr_copy) },
	{ 0x316904e1, __VMLINUX_SYMBOL_STR(ocfs2_dlm_unlock) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x49608959, __VMLINUX_SYMBOL_STR(migrate_disable) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x60f4bcef, __VMLINUX_SYMBOL_STR(ocfs2_dlm_lvb_valid) },
	{ 0xc7944d35, __VMLINUX_SYMBOL_STR(__rt_spin_lock_init) },
	{ 0x40718c92, __VMLINUX_SYMBOL_STR(ocfs2_dlm_lock) },
	{ 0x4ea5f9, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0xcd283c91, __VMLINUX_SYMBOL_STR(simple_getattr) },
	{ 0x2430c857, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xe40cffce, __VMLINUX_SYMBOL_STR(ocfs2_stack_glue_set_max_proto_version) },
	{ 0x26f5903, __VMLINUX_SYMBOL_STR(simple_unlink) },
	{ 0x6653038a, __VMLINUX_SYMBOL_STR(simple_dir_operations) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xc1a650c6, __VMLINUX_SYMBOL_STR(inode_change_ok) },
	{ 0x1cb231d0, __VMLINUX_SYMBOL_STR(mlog_not_bits) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd0a54ee2, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x3374c1a8, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x6e9ef562, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xfee09c47, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0xf1a268f4, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x3bcef5f3, __VMLINUX_SYMBOL_STR(ocfs2_dlm_lock_status) },
	{ 0x44cd22ee, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0xa4e0fa50, __VMLINUX_SYMBOL_STR(simple_statfs) },
	{ 0x687f6251, __VMLINUX_SYMBOL_STR(mlog_and_bits) },
	{ 0xa8ce6ea4, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xe8531182, __VMLINUX_SYMBOL_STR(bdi_destroy) },
	{ 0x789adbc2, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xa06fbc10, __VMLINUX_SYMBOL_STR(ocfs2_cluster_connect_agnostic) },
	{ 0x4835d779, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x5db489c1, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0x7e4e1fd1, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x1181ef94, __VMLINUX_SYMBOL_STR(simple_rmdir) },
	{ 0x9e28bd62, __VMLINUX_SYMBOL_STR(inode_init_owner) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ocfs2_stackglue,ocfs2_nodemanager";


MODULE_INFO(srcversion, "7B11BEF59D021B85265AD85");
