#include "libft.h"

char *ft_strncpy(char *dst, const char *src, size_t len)
{
  size_t    i;

  i = 0;
  while (i < len)
    *dst++ = *src++;
  while (*dst)
    *dst++ = '\0';
  return (dst);
}
