/*
** *****************************************************************************
** lenny.vigeon <lenny.vigeon@stu003.cst.bunny.local>
** Ecole 89 -
**
** - convert_element.c -
**
** *****************************************************************************
*/

#include "printo.h"

char *convert_element(char *elem,
					va_list args)
{
	if (elem[0] != '%')
		return (printo_strdup(elem));
	elem++;
	if (elem[0] == '%')
		return (printo_strdup("%"));
	if (elem[0] == 'c')
		return(convert_char(args));
	if (elem[0] == 's')
		return(convert_str(args));
	if (elem[0] == 'd')
		return(convert_int(args));
	if (elem[0] == 'f')
		return(convert_float(args));
	if (elem[0] == 'B')
		return(convert_bool(args));
	if (elem[0] == 'p')
		return(convert_ptr(args));
	return (NULL);
}