#include "libft.h"

int ft_ascii(int c)
{
  if (c <= 127 && c >= 0)
    return 1;
  else
    return 0;
}
