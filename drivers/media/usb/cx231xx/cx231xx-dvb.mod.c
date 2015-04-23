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
	{ 0x665fd2f9, __VMLINUX_SYMBOL_STR(cx231xx_unregister_extension) },
	{ 0x8084a11f, __VMLINUX_SYMBOL_STR(cx231xx_register_extension) },
	{ 0x17ea7c7, __VMLINUX_SYMBOL_STR(cx231xx_tuner_callback) },
	{ 0xd01d57ff, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0xe9f78926, __VMLINUX_SYMBOL_STR(dvb_net_init) },
	{ 0xfc2bc744, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
	{ 0x8d2eda2a, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0x8fa34670, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0x283e974, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0x8b834218, __VMLINUX_SYMBOL_STR(__mutex_do_init) },
	{ 0x6b3e609d, __VMLINUX_SYMBOL_STR(__rt_mutex_init) },
	{ 0x81208c9f, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x3f152b56, __VMLINUX_SYMBOL_STR(i2c_new_device) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x1f54b3ef, __VMLINUX_SYMBOL_STR(cx231xx_demod_reset) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xbb24c08a, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0x25b14265, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0xef577293, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0xf252db28, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0xba9a0f9b, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xc9d231b4, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0xfd960789, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0xa75a022a, __VMLINUX_SYMBOL_STR(dvb_net_release) },
	{ 0xdbb5e01, __VMLINUX_SYMBOL_STR(cx231xx_init_bulk) },
	{ 0x198b5469, __VMLINUX_SYMBOL_STR(cx231xx_init_isoc) },
	{ 0x7b44cc32, __VMLINUX_SYMBOL_STR(cx231xx_set_alt_setting) },
	{ 0x444449f5, __VMLINUX_SYMBOL_STR(cx231xx_enable_i2c_port_3) },
	{ 0x7af97adb, __VMLINUX_SYMBOL_STR(cx231xx_uninit_isoc) },
	{ 0x7bd2ab18, __VMLINUX_SYMBOL_STR(cx231xx_uninit_bulk) },
	{ 0x96cc1a34, __VMLINUX_SYMBOL_STR(_mutex_unlock) },
	{ 0x553c36a1, __VMLINUX_SYMBOL_STR(_mutex_lock) },
	{ 0x9695c2a7, __VMLINUX_SYMBOL_STR(cx231xx_set_mode) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4df116eb, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cx231xx,dvb-core";


MODULE_INFO(srcversion, "99FA6F0257142123AC13458");
