/*
** *****************************************************************************
** lenny.vigeon <lenny.vigeon@stu018.cst.bunny.local>
** Ecole 89 -
**
** - printo_macro.h -
**
** *****************************************************************************
*/

#ifndef		__PRINTO_MACRO_H__
#define		__PRINTO_MACRO_H__

#define 	PRINTO_ABS(n) (((n) < 0) ? (-(n)) : (n))
#define 	NUM_BASE 10
#define 	PTR_BASE 16

typedef enum e_flag_type
  {
    F_PERCENT,
	F_INT,
	F_FLOAT,
	F_STR,
	F_CHAR,
	F_BOOL,
	F_PTR,
    NB_OF_FLAGS // always be at the end
  }			t_flag_type;

#define FLAGS ({char flags[NB_OF_FLAGS]; \
	flags[F_PERCENT] = '%';	\
	flags[F_INT] = 'd';		\
	flags[F_FLOAT] = 'f';	\
	flags[F_STR] = 's';		\
	flags[F_CHAR] = 'c';	\
	flags[F_BOOL] = 'B';	\
	flags[F_PTR] = 'p';		\
    flags;})

#endif  /*      __PRINTO_MACRO_H__    */