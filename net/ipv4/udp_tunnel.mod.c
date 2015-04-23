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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xff280e9c, __VMLINUX_SYMBOL_STR(sock_create_kern) },
	{ 0xd2e000, __VMLINUX_SYMBOL_STR(__put_net) },
	{ 0xf533f5ab, __VMLINUX_SYMBOL_STR(kernel_connect) },
	{ 0xf89ff816, __VMLINUX_SYMBOL_STR(iptunnel_xmit) },
	{ 0xb20a3b91, __VMLINUX_SYMBOL_STR(kernel_sock_shutdown) },
	{ 0x99517682, __VMLINUX_SYMBOL_STR(udp_encap_enable) },
	{ 0x3e1de77f, __VMLINUX_SYMBOL_STR(ipv6_stub) },
	{ 0xcf9394a0, __VMLINUX_SYMBOL_STR(sk_release_kernel) },
	{ 0xae70f692, __VMLINUX_SYMBOL_STR(udp_set_csum) },
	{ 0x6cd3e211, __VMLINUX_SYMBOL_STR(kernel_bind) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "C9D6241A1B922638650C56A");
