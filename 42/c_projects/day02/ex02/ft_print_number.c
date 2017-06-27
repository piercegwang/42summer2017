#include <unistd.h>

int	ft_putchar(char c)
{
 write(1, &c, 1);
 return 0;
}


void ft_print_numbers()
{
	int i = 0;
	char numbers[] = "0123456789";
	while (numbers[i] != '\0')
	{
	char x = numbers[i];
    ft_putchar(x);
   	++i;
	}
}

int main()
{
	ft_print_numbers();
	return 0;
}