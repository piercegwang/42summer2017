#include <unistd.h>

int	ft_putchar(char c)
{
 write(1, &c, 1);
 return 0;
}

int main()
{
	ft_putchar('c');
	return 0;
}