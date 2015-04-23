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
	{ 0xcff0b0c4, __VMLINUX_SYMBOL_STR(fuse_file_poll) },
	{ 0x2136e2ad, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xf6581b4e, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x2af9a1b0, __VMLINUX_SYMBOL_STR(fuse_dev_operations) },
	{ 0xf7b92740, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x50942c4d, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0x4c3ef752, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xec80dffb, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x541653c2, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0xf0f34634, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x693be3de, __VMLINUX_SYMBOL_STR(cdev_alloc) },
	{ 0x43bac0c4, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0xc6318882, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x48219419, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x4226ae42, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0xd8e484f0, __VMLINUX_SYMBOL_STR(register_chrdev_region) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x77bc13a0, __VMLINUX_SYMBOL_STR(strim) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x9a5d071a, __VMLINUX_SYMBOL_STR(fuse_conn_kill) },
	{ 0x60dd77ef, __VMLINUX_SYMBOL_STR(fuse_direct_io) },
	{ 0x88f81796, __VMLINUX_SYMBOL_STR(iov_iter_init) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x9419fc9, __VMLINUX_SYMBOL_STR(fuse_do_ioctl) },
	{ 0x36386cc8, __VMLINUX_SYMBOL_STR(fuse_do_open) },
	{ 0x29f39590, __VMLINUX_SYMBOL_STR(fuse_conn_get) },
	{ 0x6295c7a1, __VMLINUX_SYMBOL_STR(fuse_sync_release) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbd2549a5, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0xd01d57ff, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x14d7e5, __VMLINUX_SYMBOL_STR(fuse_conn_put) },
	{ 0x7721c5aa, __VMLINUX_SYMBOL_STR(fuse_put_request) },
	{ 0xe4bcfd45, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xeef8fcb1, __VMLINUX_SYMBOL_STR(fuse_request_send_background) },
	{ 0x583db796, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xa9bcd2c6, __VMLINUX_SYMBOL_STR(fuse_get_req_for_background) },
	{ 0xb7029d23, __VMLINUX_SYMBOL_STR(fuse_conn_init) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x366560f2, __VMLINUX_SYMBOL_STR(fuse_dev_release) },
	{ 0x39ebfe60, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x2111b637, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x96cc1a34, __VMLINUX_SYMBOL_STR(_mutex_unlock) },
	{ 0x553c36a1, __VMLINUX_SYMBOL_STR(_mutex_lock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf3961572, __VMLINUX_SYMBOL_STR(fuse_abort_conn) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fuse";


MODULE_INFO(srcversion, "FA466448AB7918EE56028FD");
