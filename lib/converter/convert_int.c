/*
** *****************************************************************************
** lenny.vigeon <lenny.vigeon@stu003.cst.bunny.local>
** Ecole 89 -
**
** - convert_int.c -
**
** *****************************************************************************
*/

#include "printo_converter.h"

char *convert_int(va_list args)
{
	return (int_converter_base((long) va_arg(args, long), NUM_BASE));
}