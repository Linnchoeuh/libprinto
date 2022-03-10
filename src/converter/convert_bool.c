/*
** *****************************************************************************
** lenny.vigeon <lenny.vigeon@stu003.cst.bunny.local>
** Ecole 89 -
**
** - convert_bool.c -
**
** *****************************************************************************
*/

#include "printo.h"

char *convert_bool(va_list args)
{
	if ((int) va_arg(args, int))
		return (printo_strdup("true"));
	return (printo_strdup("false"));
}