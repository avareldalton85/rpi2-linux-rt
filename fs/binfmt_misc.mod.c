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
	{ 0xce61cbba, __VMLINUX_SYMBOL_STR(kill_litter_super) },
	{ 0x2136e2ad, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x6c34749f, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0xa4e0fa50, __VMLINUX_SYMBOL_STR(simple_statfs) },
	{ 0x789adbc2, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xd523dc7d, __VMLINUX_SYMBOL_STR(unregister_binfmt) },
	{ 0xa5063edf, __VMLINUX_SYMBOL_STR(__register_binfmt) },
	{ 0x3374c1a8, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0xf1a268f4, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x7e4e1fd1, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x8c7cd3d, __VMLINUX_SYMBOL_STR(simple_pin_fs) },
	{ 0x405df1d, __VMLINUX_SYMBOL_STR(current_fs_time) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0x4835d779, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0x86b38345, __VMLINUX_SYMBOL_STR(lookup_one_len) },
	{ 0xc8339e24, __VMLINUX_SYMBOL_STR(string_unescape) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xcf0661f4, __VMLINUX_SYMBOL_STR(kernel_read) },
	{ 0x16d9a74, __VMLINUX_SYMBOL_STR(would_dump) },
	{ 0x945c581d, __VMLINUX_SYMBOL_STR(fd_install) },
	{ 0xa843805a, __VMLINUX_SYMBOL_STR(get_unused_fd_flags) },
	{ 0xdcb0349b, __VMLINUX_SYMBOL_STR(sys_close) },
	{ 0xba63f494, __VMLINUX_SYMBOL_STR(search_binary_handler) },
	{ 0xbcc89e97, __VMLINUX_SYMBOL_STR(prepare_binprm) },
	{ 0x1bc5ca84, __VMLINUX_SYMBOL_STR(open_exec) },
	{ 0x9b031ae8, __VMLINUX_SYMBOL_STR(bprm_change_interp) },
	{ 0x54df5ff7, __VMLINUX_SYMBOL_STR(copy_strings_kernel) },
	{ 0xfe5fbc82, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x58e73934, __VMLINUX_SYMBOL_STR(remove_arg_zero) },
	{ 0x1ec5ea56, __VMLINUX_SYMBOL_STR(rt_read_unlock) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x9f984513, __VMLINUX_SYMBOL_STR(strrchr) },
	{ 0xdb772c10, __VMLINUX_SYMBOL_STR(rt_read_lock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5db489c1, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x96cc1a34, __VMLINUX_SYMBOL_STR(_mutex_unlock) },
	{ 0x553c36a1, __VMLINUX_SYMBOL_STR(_mutex_lock) },
	{ 0xd60100b6, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x751f1fee, __VMLINUX_SYMBOL_STR(simple_release_fs) },
	{ 0x922e1103, __VMLINUX_SYMBOL_STR(dput) },
	{ 0xf45d69bc, __VMLINUX_SYMBOL_STR(d_drop) },
	{ 0x6dd92af6, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0x81a61c2b, __VMLINUX_SYMBOL_STR(rt_write_unlock) },
	{ 0x1fa2a53e, __VMLINUX_SYMBOL_STR(rt_write_lock) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x7710b42c, __VMLINUX_SYMBOL_STR(simple_fill_super) },
	{ 0x6d06ce5d, __VMLINUX_SYMBOL_STR(mount_single) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "7B20DDAE720FDDA796C6F32");
