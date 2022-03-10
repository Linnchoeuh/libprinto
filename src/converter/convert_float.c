/*
** *****************************************************************************
** lenny.vigeon <lenny.vigeon@stu003.cst.bunny.local>
** Ecole 89 -
**
** - convert_float.c -
**
** *****************************************************************************
*/

#include "printo.h"

char *convert_float(va_list args)
{
	char *str;
	double num;
	long int_part;
	double float_part;

	num = (double) va_arg(args, double);
	int_part = (long) num;
	float_part = num - (double) int_part;
	str = convert_int()
	return (str);
}