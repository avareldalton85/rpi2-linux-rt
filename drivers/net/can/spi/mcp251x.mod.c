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
	{ 0x7a814255, __VMLINUX_SYMBOL_STR(can_change_mtu) },
	{ 0xeb5defc1, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x44c395ef, __VMLINUX_SYMBOL_STR(spi_register_driver) },
	{ 0x24594dfb, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0xc5cd60f2, __VMLINUX_SYMBOL_STR(can_get_echo_skb) },
	{ 0x79c277f0, __VMLINUX_SYMBOL_STR(can_bus_off) },
	{ 0xff1e29a1, __VMLINUX_SYMBOL_STR(can_put_echo_skb) },
	{ 0xcf1572f5, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xb8314198, __VMLINUX_SYMBOL_STR(open_candev) },
	{ 0x63de952d, __VMLINUX_SYMBOL_STR(spi_get_device_id) },
	{ 0xd3550456, __VMLINUX_SYMBOL_STR(dmam_alloc_coherent) },
	{ 0x6f11ad4b, __VMLINUX_SYMBOL_STR(register_candev) },
	{ 0xd509d1d5, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x8b834218, __VMLINUX_SYMBOL_STR(__mutex_do_init) },
	{ 0x6b3e609d, __VMLINUX_SYMBOL_STR(__rt_mutex_init) },
	{ 0x8eea5a46, __VMLINUX_SYMBOL_STR(spi_setup) },
	{ 0x69fda1d6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0xebd16564, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0xfebaef44, __VMLINUX_SYMBOL_STR(alloc_candev) },
	{ 0x50934c4b, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0x47f9e91a, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0xc41840f8, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x4f4b221b, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xf95ad897, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xbc3850ac, __VMLINUX_SYMBOL_STR(alloc_can_skb) },
	{ 0x9a08450a, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x17bc97e9, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0xd23d869c, __VMLINUX_SYMBOL_STR(alloc_can_err_skb) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x96cc1a34, __VMLINUX_SYMBOL_STR(_mutex_unlock) },
	{ 0x553c36a1, __VMLINUX_SYMBOL_STR(_mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xb142ca9c, __VMLINUX_SYMBOL_STR(can_free_echo_skb) },
	{ 0x3b8e878, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x75a7e128, __VMLINUX_SYMBOL_STR(close_candev) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x18be9363, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf010d488, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x986fb6e7, __VMLINUX_SYMBOL_STR(free_candev) },
	{ 0xc63e49e2, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xa853eecd, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x626d5fe7, __VMLINUX_SYMBOL_STR(unregister_candev) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can-dev";

MODULE_ALIAS("spi:mcp2510");
MODULE_ALIAS("spi:mcp2515");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2510*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2515*");

MODULE_INFO(srcversion, "4E4222EB9FB755EB3890A9B");
