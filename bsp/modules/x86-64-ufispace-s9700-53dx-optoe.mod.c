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
	{ 0xb6022c7c, "i2c_new_dummy_device" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8b31f2ca, "_dev_err" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xe914e41e, "strcpy" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcae4420d, "i2c_transfer" },
	{ 0xfa5cc65a, "__dynamic_dev_dbg" },
	{ 0x9b790b18, "i2c_smbus_read_byte_data" },
	{ 0x64d67f26, "i2c_smbus_read_i2c_block_data" },
	{ 0xf748e03, "i2c_smbus_read_word_data" },
	{ 0x9dc216f1, "i2c_smbus_write_i2c_block_data" },
	{ 0x69acdf38, "memcpy" },
	{ 0x159e5526, "i2c_smbus_write_byte_data" },
	{ 0x85623b52, "i2c_smbus_write_word_data" },
	{ 0x7a198808, "i2c_del_driver" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x2731d987, "kmalloc_caches" },
	{ 0xd038f0a1, "__kmalloc_cache_noprof" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x52da8949, "sysfs_create_bin_file" },
	{ 0xdf04fabd, "sysfs_create_group" },
	{ 0x4cce3e70, "i2c_get_match_data" },
	{ 0x2fda5b25, "_dev_info" },
	{ 0xe696b6d5, "_dev_notice" },
	{ 0xa68684d0, "_dev_warn" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3e6dac7d, "i2c_register_driver" },
	{ 0x92997ed8, "_printk" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x4277ab8d, "sysfs_remove_group" },
	{ 0xfbb69755, "sysfs_remove_bin_file" },
	{ 0xd134e8b2, "i2c_unregister_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x16d960c0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:optoe1");
MODULE_ALIAS("i2c:optoe2");
MODULE_ALIAS("i2c:optoe3");
MODULE_ALIAS("i2c:sff8436");
MODULE_ALIAS("i2c:24c04");
