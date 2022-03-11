/*
** *****************************************************************************
** lenny.vigeon <lenny.vigeon@stu018.cst.bunny.local>
** Ecole 89 -
**
** - printo_converter.h -
**
** *****************************************************************************
*/

#ifndef		__PRINTO_CONVERTER_H__
#define		__PRINTO_CONVERTER_H__

#include	"printo.h"

char *convert_element(char *elem,
					va_list args);

char *convert_int(va_list args);

/**
 * @brief Take a number and convert into an str a the given base
 *
 * @param num The number you want to convert
 * @param base Which base you want can't be upper than 36.
 * @return char* that represent the number
 */
char *int_converter_base(long num,
					int base);

char *convert_float(va_list args);

char *convert_str(va_list args);

char *convert_char(va_list args);

char *convert_bool(va_list args);

char *convert_ptr(va_list args);

typedef enum e_convert_func_type
  {
	CONV_INT,
	CONV_FLOAT,
	CONV_STR,
	CONV_CHAR,
	CONV_BOOL,
	CONV_PTR,
    NB_OF_CONVERTER // always be at the end
  }			t_convert_func_type;

typedef char* (*t_convert_func)(va_list args);

#define CONVERT_FUNC ({t_convert_func convert_func[NB_OF_CONVERTER]; \
	convert_func[CONV_INT] = convert_int;		\
	convert_func[CONV_FLOAT] = convert_float;	\
	convert_func[CONV_STR] = convert_str;		\
	convert_func[CONV_CHAR] = convert_char;		\
	convert_func[CONV_BOOL] = convert_bool;		\
	convert_func[CONV_PTR] = convert_ptr;		\
    convert_func;})

#endif  /*      __PRINTO_CONVERTER_H__    */