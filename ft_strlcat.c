#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
		size_t i;
		size_t j;

		i = 0;
		j = 0;
		while(dst[i++])
		while(src[j])
		{
			if (i == size)
					dst[i + 1] = '\0';
			dst[i] = src[j];
			i++;
			j++;
		}
		return (i);
}

//int main(void)
//{
//
//		char *str1 = "one two ";
//		char *str2 = "three four\n";
//		char *str3 = "one two ";
//		char *str4 = "three four\n";
//		size_t length;
//		size_t length2;
//
//		length = ft_strlcat(str1, str2, 50);
//		length2 = strlcat(str3, str4, 50);
//
//		printf("the lenght of the string is u the full string: %s\n", str1);
//		printf("the lenght of the string is u the full string: %s\n", str3);
//}
