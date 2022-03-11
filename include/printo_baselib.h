/*
** *****************************************************************************
** lenny.vigeon <lenny.vigeon@stu018.cst.bunny.local>
** Ecole 89 -
**
** - printo_baselib.h -
**
** *****************************************************************************
*/

#ifndef		__PRINTO_BASELIB_H__
#define		__PRINTO_BASELIB_H__

#include <stdlib.h>

size_t printo_strlen(char *str);

size_t printo_strnlen(const char *s,
					size_t	   n);

char *printo_strdup(char *s);

char *printo_strndup(const char	*s,
				size_t	n);

int	printo_strcmp(const char *str1,
				const char *str2);

void printo_free_split(char **splitted);

#endif  /*      __PRINTO_BASELIB_H__    */