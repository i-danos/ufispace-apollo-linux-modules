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
	{ 0x37a0cba, "kfree" },
	{ 0x7a198808, "i2c_del_driver" },
	{ 0x2731d987, "kmalloc_caches" },
	{ 0xd038f0a1, "__kmalloc_cache_noprof" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x4cce3e70, "i2c_get_match_data" },
	{ 0x2fda5b25, "_dev_info" },
	{ 0xdf04fabd, "sysfs_create_group" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x3e6dac7d, "i2c_register_driver" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x159e5526, "i2c_smbus_write_byte_data" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9b790b18, "i2c_smbus_read_byte_data" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4277ab8d, "sysfs_remove_group" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x16d960c0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:s9700_53dx_cpld1");
MODULE_ALIAS("i2c:s9700_53dx_cpld2");
MODULE_ALIAS("i2c:s9700_53dx_cpld3");
MODULE_ALIAS("i2c:s9700_53dx_cpld4");
MODULE_ALIAS("i2c:s9700_53dx_cpld5");
