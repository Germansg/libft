#include "libft.h"

int ft_isalpha(int c)
{
    if ((c <= 'Z' && c >= 'A') || (c <= 'z' && c >= 'a'))
      return (1);
    else
      return (0);
}
