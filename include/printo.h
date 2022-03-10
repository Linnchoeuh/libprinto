/*
** *****************************************************************************
** lenny.vigeon <lenny.vigeon@stu018.cst.bunny.local>
** Ecole 89 -
**
** - printo.h -
**
** *****************************************************************************
*/

#ifndef		__PRINTO_H__
#define		__PRINTO_H__

#include	<stdlib.h>
#include	<unistd.h>
#include	<stdbool.h>
#include	<stdarg.h>

#include	<stdio.h>

#define 	PRINTO_ABS(n) (((n) < 0) ? (-(n)) : (n))

/**
 * @brief This function is a printf like.
 * [%%] to write a %.
 * [%d] for an int/long.
 * [%f] for a float/double.
 * [%s] for a str.
 * [%c] for a char.
 * [%B] for a boolean.
 * [%p] for an adress.
 *
 * @param fd Where you want to write it.
 * @param text The text with the flag.
 * @param ...
 */
void printo(int fd,
			char *text,
			...);

char *fill_flag(char *str,
				va_list args);

int	printo_base(ssize_t	nbr,
		       unsigned int	base);

char **split_str_by_flag(char *str,
						 ssize_t *split_len);

bool printo_str_append(char **target,
				   		char *merge);

char *convert_element(char *elem,
					va_list args);

char *convert_char(va_list args);

char *convert_str(va_list args);

char *convert_int(va_list args);

char *int_converter(long num,
					int base);

char *convert_float(va_list args);

char *convert_bool(va_list args);

char *convert_ptr(va_list args);

// LIB

size_t printo_strlen(char *str);

size_t printo_strnlen(const char *s,
					size_t	   n);

char *printo_strdup(char *s);

char *printo_strndup(const char	*s,
				size_t	n);

int	printo_strcmp(const char *str1,
				const char *str2);

void printo_free_split(char **splitted);

#endif  /*      __PRINTO_H__    */

