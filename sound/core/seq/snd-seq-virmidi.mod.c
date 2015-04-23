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
	{ 0xd01d57ff, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xdfdf95ad, __VMLINUX_SYMBOL_STR(snd_midi_event_reset_encode) },
	{ 0x7912bc57, __VMLINUX_SYMBOL_STR(rt_write_lock_irqsave) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x1a724fcc, __VMLINUX_SYMBOL_STR(snd_seq_kernel_client_ctl) },
	{ 0x4784d4e1, __VMLINUX_SYMBOL_STR(snd_device_free) },
	{ 0x6b3e609d, __VMLINUX_SYMBOL_STR(__rt_mutex_init) },
	{ 0x1ec5ea56, __VMLINUX_SYMBOL_STR(rt_read_unlock) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xb0130703, __VMLINUX_SYMBOL_STR(__rt_rwlock_init) },
	{ 0xe488eec9, __VMLINUX_SYMBOL_STR(snd_seq_create_kernel_client) },
	{ 0x916f8da5, __VMLINUX_SYMBOL_STR(snd_rawmidi_set_ops) },
	{ 0xdb772c10, __VMLINUX_SYMBOL_STR(rt_read_lock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7dc5d865, __VMLINUX_SYMBOL_STR(snd_midi_event_decode) },
	{ 0x2f6d7a8a, __VMLINUX_SYMBOL_STR(snd_rawmidi_new) },
	{ 0x5bf5569b, __VMLINUX_SYMBOL_STR(snd_midi_event_new) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd9d57b48, __VMLINUX_SYMBOL_STR(snd_rawmidi_transmit_peek) },
	{ 0xba9a0f9b, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xd8b44301, __VMLINUX_SYMBOL_STR(snd_midi_event_free) },
	{ 0x81a61c2b, __VMLINUX_SYMBOL_STR(rt_write_unlock) },
	{ 0x5a407c31, __VMLINUX_SYMBOL_STR(snd_rawmidi_transmit_ack) },
	{ 0x1b056ec3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe934da1d, __VMLINUX_SYMBOL_STR(snd_seq_dump_var_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x8ae284f4, __VMLINUX_SYMBOL_STR(snd_midi_event_encode) },
	{ 0x3fb4d161, __VMLINUX_SYMBOL_STR(snd_seq_kernel_client_dispatch) },
	{ 0x6bb71038, __VMLINUX_SYMBOL_STR(snd_seq_delete_kernel_client) },
	{ 0x1f5b455c, __VMLINUX_SYMBOL_STR(snd_rawmidi_receive) },
	{ 0x81208c9f, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-seq-midi-event,snd-seq,snd,snd-rawmidi";


MODULE_INFO(srcversion, "FD3FA8F1911F1BB135128FC");
