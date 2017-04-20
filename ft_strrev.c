#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		len;
	char	*temp;

	len = my_strlen(str);
	i = 0;
	temp = (char *)malloc(sizeof(char) * (len + 1));
	if (!temp)
		return (NULL);
	while (len > 0)
		temp[i++] = str[len--];
	return (temp);
}
