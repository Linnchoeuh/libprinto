/*
** *****************************************************************************
** lenny.vigeon <lenny.vigeon@stu003.cst.bunny.local>
** Ecole 89 -
**
** - assemble_str.c -
**
** *****************************************************************************
*/

#include "printo.h"

static void delete_split_content(char **split)
{
	size_t i;

	i = 0;
	while (split[i] != NULL)
	{
		free(split[i]);
		i++;
	}
}

static ssize_t count_flag(char *str)
{
	size_t i;
	size_t count;
	bool previous_was_percent;

	count = 2;
	i = 0;
	previous_was_percent = false;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == '\0')
				return (-1);
			i++;
			count++;
			previous_was_percent = true;
		}
		else if (previous_was_percent)
		{
			count++;
			previous_was_percent = false;
		}
		i++;
	}
	return (count);
}

static bool cut_str(char **target,
					char *src)
{
	size_t i;
	size_t k;
	size_t pos;

	i = 0;
	k = 0;
	pos = 0;
	while (src[i] != '\0')
	{
		k = 0;
		if (src[i] == '%')
			k += 2;
		while (src[i] != '%' && src[i + k] != '%' && src[i + k] != '\0')
			k++;
		if ((target[pos] = printo_strndup(&src[i], k)) == NULL)
		{
			delete_split_content(target);
			return (false);
		}
		pos++;
		i += k;
	}
	return (true);
}

char **split_str_by_flag(char *str,
						 ssize_t *split_len)
{
	char **split;
	ssize_t len;

	len = count_flag(str);
	if (split_len != NULL)
		*split_len = len;
	if (len == -1 || (split = malloc(len * sizeof(char*))) == NULL)
		return (NULL);
	split[len - 1] = NULL;
	if (!cut_str(split, str))
	{
		free(split);
		return (NULL);
	}
	return (split);
}