/*
** *****************************************************************************
** lenny.vigeon <lenny.vigeon@stu003.cst.bunny.local>
** Ecole 89 -
**
** - convert_int.c -
**
** *****************************************************************************
*/

#include "printo.h"

#define NUM_BASE 10

static bool append_number(char **str,
					long num)
{
	bool state;
	char c[2] = {'0' + (num % NUM_BASE), '\0'};

	if (num > NUM_BASE - 1)
		state = append_number(str, num / NUM_BASE);
	state = printo_str_append(str, c);
	return (state);
}

char *int_converter(long num)
{
	char *str;

	if (num < 0)
    {
      	num = -num;
      	str = printo_strdup("-");
    }
	else
		str = printo_strdup("");
	if (str == NULL || !append_number(&str, num))
	{
		(str != NULL) ? free(str) : 0;
		return (NULL);
	}
	return (str);
}