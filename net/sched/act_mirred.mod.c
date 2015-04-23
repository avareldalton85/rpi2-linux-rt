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
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xa57dc09d, __VMLINUX_SYMBOL_STR(tcf_unregister_action) },
	{ 0xe1b7205d, __VMLINUX_SYMBOL_STR(tcf_register_action) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5e2f582b, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0xaffaf221, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x98412643, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x7d0db45c, __VMLINUX_SYMBOL_STR(jiffies_to_clock_t) },
	{ 0xcd839d99, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x1e092d9c, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x719e5304, __VMLINUX_SYMBOL_STR(tcf_hash_release) },
	{ 0x606765fd, __VMLINUX_SYMBOL_STR(tcf_hash_create) },
	{ 0x441d4abb, __VMLINUX_SYMBOL_STR(tcf_hash_insert) },
	{ 0xe564d26e, __VMLINUX_SYMBOL_STR(tcf_hash_check) },
	{ 0xcd665361, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xb859f521, __VMLINUX_SYMBOL_STR(rt_spin_lock) },
	{ 0x49608959, __VMLINUX_SYMBOL_STR(migrate_disable) },
	{ 0x3ff62317, __VMLINUX_SYMBOL_STR(local_bh_disable) },
	{ 0x799aca4, __VMLINUX_SYMBOL_STR(local_bh_enable) },
	{ 0x4d7272e4, __VMLINUX_SYMBOL_STR(migrate_enable) },
	{ 0x3c73e696, __VMLINUX_SYMBOL_STR(rt_spin_unlock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "63BE322BDC72864547C3DDE");
