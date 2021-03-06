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
	{ 0xbc2b6659, __VMLINUX_SYMBOL_STR(devm_snd_soc_register_card) },
	{ 0xd1c4275d, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_card_name) },
	{ 0x77e2a640, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_audio_simple_widgets) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x79d59107, __VMLINUX_SYMBOL_STR(snd_soc_jack_new) },
	{ 0x4bd36a0d, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x50934c4b, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0x9085f0ac, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x18be9363, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xaaff320b, __VMLINUX_SYMBOL_STR(snd_soc_of_get_dai_name) },
	{ 0x46c5a2b4, __VMLINUX_SYMBOL_STR(of_device_is_available) },
	{ 0xde590270, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x47afac6a, __VMLINUX_SYMBOL_STR(snd_soc_jack_add_pins) },
	{ 0xac48bd75, __VMLINUX_SYMBOL_STR(of_get_child_by_name) },
	{ 0xbc34e256, __VMLINUX_SYMBOL_STR(of_get_next_child) },
	{ 0xb7143be9, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0xe5ad2c03, __VMLINUX_SYMBOL_STR(of_clk_get) },
	{ 0x7815e079, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_sysclk) },
	{ 0xc63bc58, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_audio_routing) },
	{ 0xd09f4e05, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_fmt) },
	{ 0xd718a72c, __VMLINUX_SYMBOL_STR(snd_soc_jack_add_gpios) },
	{ 0x4c3ee9c7, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_daifmt) },
	{ 0xc0a0eb2e, __VMLINUX_SYMBOL_STR(of_parse_phandle_with_args) },
	{ 0x5f181461, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_tdm_slot) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xa636ccc4, __VMLINUX_SYMBOL_STR(snd_soc_jack_free_gpios) },
	{ 0x61b4d0e4, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xd509d1d5, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xf515fdeb, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_tdm_slot) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core";

MODULE_ALIAS("of:N*T*Csimple-audio-card*");

MODULE_INFO(srcversion, "57A12EFD8408BA0DCEF3DA1");
