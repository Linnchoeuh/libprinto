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

char *convert_int(va_list args)
{
	return (int_converter((long) va_arg(args, long), 10));
}