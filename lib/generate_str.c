/*
** *****************************************************************************
** lenny.vigeon <lenny.vigeon@stu018.cst.bunny.local>
** Ecole 89 -
**
** - generate_str.h -
**
** *****************************************************************************
*/

#include "printo.h"

char *generate_str(char *text,
				   ...)
{
	char *assembled_text;
	va_list args;

	va_start(args, text);
	assembled_text = fill_flag(text, args);
	va_end(args);
	return (assembled_text);
}