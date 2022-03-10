/*
** *****************************************************************************
** lenny.vigeon <lenny.vigeon@stu003.cst.bunny.local>
** Ecole 89 -
**
** - convert_ptr.c -
**
** *****************************************************************************
*/

#include "printo.h"

char *convert_ptr(va_list args)
{
	char *ptr_str;
	char *adr;

	if ((ptr_str = printo_strdup("0x")) == NULL)
		return (NULL);
	printf("oui\n");
	if ((adr = int_converter((long) va_arg(args, long), 16)) == NULL ||
		!printo_str_append(&ptr_str, adr))
	{
		(adr != NULL) ? free(adr) : 0;
		free(ptr_str);
		return (NULL);
	}
	free(adr);
	printf("oui\n");
	return (ptr_str);
}