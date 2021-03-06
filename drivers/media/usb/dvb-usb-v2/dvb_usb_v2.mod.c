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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xd01d57ff, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x9102dda0, __VMLINUX_SYMBOL_STR(rc_unregister_device) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8d2eda2a, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0xa0fbac79, __VMLINUX_SYMBOL_STR(wake_up_bit) },
	{ 0xbb24c08a, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0x8b834218, __VMLINUX_SYMBOL_STR(__mutex_do_init) },
	{ 0x46d282d3, __VMLINUX_SYMBOL_STR(dvb_frontend_suspend) },
	{ 0x8fa34670, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0xee057706, __VMLINUX_SYMBOL_STR(dvb_frontend_resume) },
	{ 0x6b3e609d, __VMLINUX_SYMBOL_STR(__rt_mutex_init) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xed3e9df2, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x96cc1a34, __VMLINUX_SYMBOL_STR(_mutex_unlock) },
	{ 0xef577293, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x24d7b4eb, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xe2bf4cea, __VMLINUX_SYMBOL_STR(rc_allocate_device) },
	{ 0xa75a022a, __VMLINUX_SYMBOL_STR(dvb_net_release) },
	{ 0x7e8cd326, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0x25b14265, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x811524f, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter_raw) },
	{ 0xaf186cfd, __VMLINUX_SYMBOL_STR(rc_free_device) },
	{ 0x18be9363, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xfd960789, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0x4df116eb, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter) },
	{ 0xe9f78926, __VMLINUX_SYMBOL_STR(dvb_net_init) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xfac87cdf, __VMLINUX_SYMBOL_STR(rc_register_device) },
	{ 0xb22f20a5, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0xc9d231b4, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0x1bbc3fa7, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter_204) },
	{ 0xa20ab1b7, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0xbbd76e57, __VMLINUX_SYMBOL_STR(bit_wait) },
	{ 0x29df4bc9, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x8a2396a, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xe851bb05, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xc4ff3d67, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x283e974, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x31db3198, __VMLINUX_SYMBOL_STR(out_of_line_wait_on_bit) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xdd52e418, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x57e3e35b, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x553c36a1, __VMLINUX_SYMBOL_STR(_mutex_lock) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xe3e878e7, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xfa6adb64, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x3cd4e86a, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xfc2bc744, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rc-core,dvb-core";


MODULE_INFO(srcversion, "931D655F123DAF7EB5C3699");
