#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		return (s + i);
		i++;
	}
	return (NULL);
}

//int		main(void)
//{
//	char str[40] = "below";
//
//	ft_strchr(str, 119);
//	ft_putstr(str);
//	return (0);
//}

int main() {
  char *s;
  char buf [] = "This is a test";

  s = strchr (buf, 't');

  if (s != NULL)
    printf ("found a 't' at %s\n", s);

  return 0;
}
