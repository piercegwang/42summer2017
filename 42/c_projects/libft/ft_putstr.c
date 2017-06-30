#include <unistd.h>

int ft_putchar(char c);
void ft_putstr(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
	char x = str[i];
    ft_putchar(x);
   	++i;
	}
}
