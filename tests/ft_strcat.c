#include "libft.h"
#include <stdio.h>

//char *ft_strcat(char *s1, const char *s2)
//{
//  int i;
//  int j;
//
//  i = 0;
//  j = 0;
//  while (s1[i])
//    i++;
//  while (s2[j])
//  {
//    s1[i] = s2[j];
//    i++;
//    j++;
//  }
//  return (s1);
//}

int main(void)
{
  char s1[20] = "it begins ";
  const char s2[20] = "right now";

  strcat(s1, s2);
  printf("%s", s1);
  return (0);
}
