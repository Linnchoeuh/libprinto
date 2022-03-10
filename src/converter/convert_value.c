/*
** *****************************************************************************
** lenny.vigeon <lenny.vigeon@stu003.cst.bunny.local>
** Ecole 89 -
**
** - convert_value.c -
**
** *****************************************************************************
*/

#include "printo.h"

char *convert_value(char *elem,
					va_list args)
{
	if (elem[0] != '%')
		return (printo_strdup(elem));
	elem++;
	if (elem[0] == 'c')
		return(convert_char(args));
	if (elem[0] == 's')
		return(convert_str(args));
	if (elem[0] == 'd')
		return(convert_int(args));
	return (NULL);
}