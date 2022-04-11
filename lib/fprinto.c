/*
** *****************************************************************************
** lenny.vigeon <lenny.vigeon@stu018.cst.bunny.local>
** Ecole 89 -
**
** - printo.c -
**
** *****************************************************************************
*/

#include "printo.h"

void fprinto(int fd,
			char *text,
			...)
{
	char *assembled_text;
	va_list args;

	va_start(args, text);
	assembled_text = fill_format(text, args);
	va_end(args);
	if (assembled_text != NULL)
	{
		write(fd, assembled_text, printo_strlen(assembled_text));
		free(assembled_text);
	}
}