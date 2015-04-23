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
	{ 0xaeeeb290, __VMLINUX_SYMBOL_STR(ip_tunnel_dellink) },
	{ 0x60ee9172, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xacbe82e4, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0xd905c52c, __VMLINUX_SYMBOL_STR(ip_tunnel_change_mtu) },
	{ 0xb04ae793, __VMLINUX_SYMBOL_STR(ip_tunnel_uninit) },
	{ 0x1ac0f490, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0xd50672f7, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0xa5e39e60, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_deregister) },
	{ 0x20941632, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x740aab70, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_register) },
	{ 0x8ae51120, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x594397a6, __VMLINUX_SYMBOL_STR(ip_tunnel_delete_net) },
	{ 0xbc282e19, __VMLINUX_SYMBOL_STR(ip_tunnel_init) },
	{ 0xcdb001f4, __VMLINUX_SYMBOL_STR(ip_tunnel_xmit) },
	{ 0x4c74c361, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x1043b4ab, __VMLINUX_SYMBOL_STR(ip_tunnel_ioctl) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xc00089dd, __VMLINUX_SYMBOL_STR(ip_tunnel_setup) },
	{ 0x1cc58eca, __VMLINUX_SYMBOL_STR(ip_tunnel_newlink) },
	{ 0xfd3c8025, __VMLINUX_SYMBOL_STR(ip_tunnel_changelink) },
	{ 0xd47eaa46, __VMLINUX_SYMBOL_STR(ip_tunnel_encap_setup) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x1e092d9c, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x3f9b4248, __VMLINUX_SYMBOL_STR(ip_tunnel_rcv) },
	{ 0x9e660339, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x4f4b221b, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xd8646b9c, __VMLINUX_SYMBOL_STR(iptunnel_pull_header) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xbcbb599, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0x84fe74c2, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0xe6ac4595, __VMLINUX_SYMBOL_STR(ip_tunnel_lookup) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x2b5627f3, __VMLINUX_SYMBOL_STR(ip_tunnel_init_net) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel,tunnel4";


MODULE_INFO(srcversion, "ED2CCFC2DD843FA26105623");