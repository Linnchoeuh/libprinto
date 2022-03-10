/*
** *****************************************************************************
** lenny.vigeon
** lenny.vigeon <lenny.vigeon@student-station>
**
** printo_free_split.c - 2022
**
** Entirely free all the occurence if a char **
** At least require a NULL pointer at the end of the char **
** *****************************************************************************
*/

#include "printo.h"

void printo_free_split(char **splitted)
{
	size_t i;

	if (splitted == NULL)
		return;
	i = 0;
	while (splitted[i] != NULL)
	{
		free(splitted[i]);
		++i;
	}
	free(splitted);
}

