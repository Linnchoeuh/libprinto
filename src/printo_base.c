/*
** *****************************************************************************
** lenny.vigeon <lenny.vigeon@stu003.cst.bunny.local>
** Ecole 89 -
**
** - print_base -
**
** *****************************************************************************
*/

#include "printo.h"

int	printo_base(ssize_t	nbr,
		       unsigned int	base)
{
  char	c;
  int	count;
  char nums[36] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

  if (base > 35)
    return (-1);
  if (nbr < 0)
    {
      nbr = -nbr;
      write(1, "-", 1);
    }
  c = nums[nbr % base];
  count = 1;
  if (nbr > base - 1)
    count += printo_base(nbr / base, base);
  write(STDOUT_FILENO, &c, 1);
  return (count);
}
