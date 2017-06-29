#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 < *s2)
			return (*s1 - *s2);
		if (*s1 > *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

int main ()
{
   char str1[15];
   char str2[15];
   int ret;


   ft_strcpy(str1, "abcdef");
   ft_strcpy(str2, "ABCDEF");

   ret = ft_strcmp(str1, str2);

   if(ret < 0)
   {
      ft_putstr("str1 is less than str2");
   }
   else if(ret > 0)
   {
      ft_putstr("str2 is less than str1");
   }
   else
   {
      ft_putstr("str1 is equal to str2");
   }

   return(0);
}
