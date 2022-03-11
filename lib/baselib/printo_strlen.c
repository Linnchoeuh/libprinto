/*
** *****************************************************************************
** lenny.vigeon <lenny.vigeon@stu018.cst.bunny.local>
** Ecole 89 -
**
** - printo_strlen.c -
**
** *****************************************************************************
*/

#include "printo_baselib.h"

size_t printo_strlen(char *str)
{
	size_t count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}