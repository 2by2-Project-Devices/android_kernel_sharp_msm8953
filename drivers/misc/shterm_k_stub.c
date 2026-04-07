#include <linux/module.h>
#include <misc/shterm_k.h>

int shterm_k_set_info(unsigned long int shterm_info_id,
		unsigned long int shterm_info_value)
{
	return SHTERM_SUCCESS;
}
EXPORT_SYMBOL(shterm_k_set_info);

int shterm_k_set_event(shbattlog_info_t *info)
{
	return SHTERM_SUCCESS;
}
EXPORT_SYMBOL(shterm_k_set_event);

int shterm_flip_status_set(int state)
{
	return SHTERM_SUCCESS;
}
EXPORT_SYMBOL(shterm_flip_status_set);

int shterm_get_music_info(void)
{
	return 0;
}
EXPORT_SYMBOL(shterm_get_music_info);
