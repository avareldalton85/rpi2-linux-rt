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
	{ 0xb870b280, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0xd01d57ff, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x6a77ad8a, __VMLINUX_SYMBOL_STR(usbip_event_happened) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x4d7272e4, __VMLINUX_SYMBOL_STR(migrate_enable) },
	{ 0xd02753dc, __VMLINUX_SYMBOL_STR(usbip_header_correct_endian) },
	{ 0x2a8f52ec, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0x79dd0695, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf5dcb5d0, __VMLINUX_SYMBOL_STR(usb_set_configuration) },
	{ 0x6b3e609d, __VMLINUX_SYMBOL_STR(__rt_mutex_init) },
	{ 0xa14b1492, __VMLINUX_SYMBOL_STR(usbip_alloc_iso_desc_pdu) },
	{ 0xed3e9df2, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x96cc1a34, __VMLINUX_SYMBOL_STR(_mutex_unlock) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xd2d37faa, __VMLINUX_SYMBOL_STR(usb_hub_claim_port) },
	{ 0x32ddd5b6, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x86ced475, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x149ed814, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0xb859f521, __VMLINUX_SYMBOL_STR(rt_spin_lock) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xa3cf4667, __VMLINUX_SYMBOL_STR(usbip_event_add) },
	{ 0x3c73e696, __VMLINUX_SYMBOL_STR(rt_spin_unlock) },
	{ 0x9dfba532, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe1ea0586, __VMLINUX_SYMBOL_STR(usbip_dump_header) },
	{ 0x1fbb7c3e, __VMLINUX_SYMBOL_STR(usb_lock_device_for_reset) },
	{ 0x18be9363, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xb99f8fc3, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xb514d72b, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x91174f32, __VMLINUX_SYMBOL_STR(usb_register_device_driver) },
	{ 0x95ac728c, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0xb20a3b91, __VMLINUX_SYMBOL_STR(kernel_sock_shutdown) },
	{ 0x975cac74, __VMLINUX_SYMBOL_STR(device_attach) },
	{ 0x428cdbf0, __VMLINUX_SYMBOL_STR(usbip_stop_eh) },
	{ 0x3616d381, __VMLINUX_SYMBOL_STR(dev_attr_usbip_debug) },
	{ 0x49608959, __VMLINUX_SYMBOL_STR(migrate_disable) },
	{ 0xfe5fbc82, __VMLINUX_SYMBOL_STR(fput) },
	{ 0xd0948516, __VMLINUX_SYMBOL_STR(usbip_recv_iso) },
	{ 0xc7944d35, __VMLINUX_SYMBOL_STR(__rt_spin_lock_init) },
	{ 0xa2f98e2c, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x29df4bc9, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x8a2396a, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x2430c857, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x4003f045, __VMLINUX_SYMBOL_STR(usbip_dump_urb) },
	{ 0x6e20935b, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xd9ce8f0c, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0x92eb8bed, __VMLINUX_SYMBOL_STR(driver_create_file) },
	{ 0x2dd1ed9e, __VMLINUX_SYMBOL_STR(usbip_recv) },
	{ 0x2552138c, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0xd0b730a8, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x7b25f37, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0x6843c593, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x2d84c974, __VMLINUX_SYMBOL_STR(usb_deregister_device_driver) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd0a54ee2, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x6e9ef562, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0xfee09c47, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf049097c, __VMLINUX_SYMBOL_STR(usbip_recv_xbuff) },
	{ 0xce852ddb, __VMLINUX_SYMBOL_STR(usb_hub_release_port) },
	{ 0x78b72f44, __VMLINUX_SYMBOL_STR(usbip_debug_flag) },
	{ 0xa8ce6ea4, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x9bb98980, __VMLINUX_SYMBOL_STR(driver_remove_file) },
	{ 0xa6db2fee, __VMLINUX_SYMBOL_STR(__put_task_struct_cb) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xf05f715, __VMLINUX_SYMBOL_STR(usbip_start_eh) },
	{ 0xe3e878e7, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x6dcaeebb, __VMLINUX_SYMBOL_STR(usbip_pack_pdu) },
	{ 0x3cd4e86a, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbip-core";


MODULE_INFO(srcversion, "6FB5741C62D15F79758F1B8");
