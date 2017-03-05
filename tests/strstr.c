#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//int	main(int argc, char **argv)
//{
//	if (argc >= 0)
//		char first[50];
//		char bar[50];
//		
//		first = argv[1];
//		bar = argv[2];
//		printf("%u\n",strstr(first, bar));
//	return (0);
//}

int main()
{
   const char haystack[20] = "Ts what dick Point";
   const char needle[10] = "dick";
   char *ret;

   ret = strstr(haystack, needle);

   printf("The substring is: %s\n", ret);
   
   return(0);
}

