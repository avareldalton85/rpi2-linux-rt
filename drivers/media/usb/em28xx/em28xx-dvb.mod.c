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
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x1f54e93d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xe5c22ac0, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0xbe32580c, __VMLINUX_SYMBOL_STR(em28xx_unregister_extension) },
	{ 0x3e5bed92, __VMLINUX_SYMBOL_STR(em28xx_register_extension) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe9f78926, __VMLINUX_SYMBOL_STR(dvb_net_init) },
	{ 0xfc2bc744, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
	{ 0x8d2eda2a, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0x8fa34670, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0x283e974, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0x8b834218, __VMLINUX_SYMBOL_STR(__mutex_do_init) },
	{ 0x6b3e609d, __VMLINUX_SYMBOL_STR(__rt_mutex_init) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x81208c9f, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x3f152b56, __VMLINUX_SYMBOL_STR(i2c_new_device) },
	{ 0x7fc8652c, __VMLINUX_SYMBOL_STR(em28xx_tuner_callback) },
	{ 0xd01d57ff, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf7ef1e9d, __VMLINUX_SYMBOL_STR(em28xx_alloc_urbs) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0xbf16d3f6, __VMLINUX_SYMBOL_STR(em28xx_setup_xc3028) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xcd75ef7f, __VMLINUX_SYMBOL_STR(em28xx_free_device) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbb24c08a, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0x25b14265, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0xef577293, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0xc9d231b4, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0xfd960789, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0xa75a022a, __VMLINUX_SYMBOL_STR(dvb_net_release) },
	{ 0xf252db28, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0xba9a0f9b, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x9a477c65, __VMLINUX_SYMBOL_STR(em28xx_uninit_usb_xfer) },
	{ 0x46d282d3, __VMLINUX_SYMBOL_STR(dvb_frontend_suspend) },
	{ 0xee057706, __VMLINUX_SYMBOL_STR(dvb_frontend_resume) },
	{ 0xf473ffaf, __VMLINUX_SYMBOL_STR(down) },
	{ 0x4be7fb63, __VMLINUX_SYMBOL_STR(up) },
	{ 0x9aefa460, __VMLINUX_SYMBOL_STR(em28xx_write_reg_bits) },
	{ 0x99c9efd4, __VMLINUX_SYMBOL_STR(em28xx_init_usb_xfer) },
	{ 0xb514d72b, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x96cc1a34, __VMLINUX_SYMBOL_STR(_mutex_unlock) },
	{ 0x64b59541, __VMLINUX_SYMBOL_STR(em28xx_stop_urbs) },
	{ 0x553c36a1, __VMLINUX_SYMBOL_STR(_mutex_lock) },
	{ 0xc80904b6, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2e103c64, __VMLINUX_SYMBOL_STR(em28xx_write_reg) },
	{ 0x7056cb90, __VMLINUX_SYMBOL_STR(em28xx_gpio_set) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfe990052, __VMLINUX_SYMBOL_STR(gpio_free) },
	{ 0x403f9529, __VMLINUX_SYMBOL_STR(gpio_request_one) },
	{ 0x2f0c1b95, __VMLINUX_SYMBOL_STR(em28xx_set_mode) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4df116eb, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=em28xx,dvb-core";


MODULE_INFO(srcversion, "21C210392E0D598E47C5324");
