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
	{ 0xec80dffb, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb0d904b7, __VMLINUX_SYMBOL_STR(raid6_empty_zero_page) },
	{ 0xcf807b99, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x583db796, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xd4858aa6, __VMLINUX_SYMBOL_STR(dmaengine_unmap_put) },
	{ 0x5513b71, __VMLINUX_SYMBOL_STR(raid6_call) },
	{ 0x6cde632f, __VMLINUX_SYMBOL_STR(async_tx_submit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x8f5e21d9, __VMLINUX_SYMBOL_STR(dmaengine_get_unmap_data) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xbd2549a5, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x2326eef5, __VMLINUX_SYMBOL_STR(__async_tx_find_channel) },
	{ 0xd505e3fd, __VMLINUX_SYMBOL_STR(async_xor) },
	{ 0x5e2a1bea, __VMLINUX_SYMBOL_STR(async_tx_quiesce) },
	{ 0x15fe0cd3, __VMLINUX_SYMBOL_STR(raid6_gfexp) },
	{ 0xee6e693d, __VMLINUX_SYMBOL_STR(put_page) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=raid6_pq,async_tx,async_xor";


MODULE_INFO(srcversion, "38AF55F72B029376A71F1A6");
