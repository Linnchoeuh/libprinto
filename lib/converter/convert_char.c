/*
** *****************************************************************************
** lenny.vigeon <lenny.vigeon@stu003.cst.bunny.local>
** Ecole 89 -
**
** - convert_char.c -
**
** *****************************************************************************
*/

#include "printo_converter.h"

char *convert_char(va_list args)
{
	char c;

	c = (int) va_arg(args, int);
	return (printo_strdup(&c));
}