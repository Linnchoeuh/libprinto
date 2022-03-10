/*
** *****************************************************************************
** lenny.vigeon <lenny.vigeon@stu003.cst.bunny.local>
** Ecole 89 -
**
** - convert_str.c -
**
** *****************************************************************************
*/

#include "printo.h"

char *convert_str(va_list args)
{
	char *str;

	str = (char*) va_arg(args, char*);
	return (printo_strdup(str));
}