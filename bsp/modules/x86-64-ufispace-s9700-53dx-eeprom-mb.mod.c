#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xfbb69755, "sysfs_remove_bin_file" },
	{ 0x37a0cba, "kfree" },
	{ 0xfa5cc65a, "__dynamic_dev_dbg" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x85623b52, "i2c_smbus_write_word_data" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x8b31f2ca, "_dev_err" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x159e5526, "i2c_smbus_write_byte_data" },
	{ 0x31112ac2, "i2c_smbus_read_byte" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7a198808, "i2c_del_driver" },
	{ 0x2731d987, "kmalloc_caches" },
	{ 0xd038f0a1, "__kmalloc_cache_noprof" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x52da8949, "sysfs_create_bin_file" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3e6dac7d, "i2c_register_driver" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x16d960c0, "module_layout" },
};

MODULE_INFO(depends, "");

