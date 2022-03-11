/*
** *****************************************************************************
** lenny.vigeon
** lenny.vigeon <lenny.vigeon@student-station>
**
** printo_strnlen.c - 2022
**
** *****************************************************************************
*/

#include "printo_baselib.h"

size_t printo_strnlen(const char *s,
					size_t	   n)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && i < n)
		++i;
	return (i);
}

