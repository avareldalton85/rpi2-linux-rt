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
	{ 0x47273a1f, __VMLINUX_SYMBOL_STR(mmc_gpio_get_cd) },
	{ 0x14d1e3cf, __VMLINUX_SYMBOL_STR(mmc_gpio_get_ro) },
	{ 0xeb5defc1, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x44c395ef, __VMLINUX_SYMBOL_STR(spi_register_driver) },
	{ 0x76cfb239, __VMLINUX_SYMBOL_STR(mmc_request_done) },
	{ 0x184d7dec, __VMLINUX_SYMBOL_STR(spi_bus_unlock) },
	{ 0xf5b4a948, __VMLINUX_SYMBOL_STR(crc_itu_t) },
	{ 0x1a734bb3, __VMLINUX_SYMBOL_STR(flush_kernel_dcache_page) },
	{ 0xb54533f7, __VMLINUX_SYMBOL_STR(usecs_to_jiffies) },
	{ 0x4e667088, __VMLINUX_SYMBOL_STR(spi_bus_lock) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xec80dffb, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xd01d57ff, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x58f3eda6, __VMLINUX_SYMBOL_STR(mmc_gpiod_request_cd_irq) },
	{ 0x2e3771c6, __VMLINUX_SYMBOL_STR(mmc_gpio_request_ro) },
	{ 0x71d12806, __VMLINUX_SYMBOL_STR(mmc_gpio_request_cd) },
	{ 0x29df4bc9, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x75ead832, __VMLINUX_SYMBOL_STR(mmc_add_host) },
	{ 0x28995a97, __VMLINUX_SYMBOL_STR(mmc_spi_get_pdata) },
	{ 0x5b3ea921, __VMLINUX_SYMBOL_STR(mmc_alloc_host) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xeccddac7, __VMLINUX_SYMBOL_STR(mmc_detect_change) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x66213969, __VMLINUX_SYMBOL_STR(crc7_be) },
	{ 0xf95ad897, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x18be9363, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf010d488, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x8eea5a46, __VMLINUX_SYMBOL_STR(spi_setup) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xf2a9371f, __VMLINUX_SYMBOL_STR(spi_sync_locked) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xcf807b99, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0xd060612d, __VMLINUX_SYMBOL_STR(mmc_spi_put_pdata) },
	{ 0xbf3e4bb2, __VMLINUX_SYMBOL_STR(mmc_free_host) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa9ceea38, __VMLINUX_SYMBOL_STR(mmc_remove_host) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=of_mmc_spi,crc7";


MODULE_INFO(srcversion, "EA1C6AD09EA7B8C51A049D3");
