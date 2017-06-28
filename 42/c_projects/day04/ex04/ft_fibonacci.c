#include "libft.h"	 

int ft_fibonacci(int);

int main(void)
{
	int n, p;
	n = 3;
	ft_putnbr(ft_fibonacci(n));
	return 0;
}
int	ft_fibonacci(int index)
{
	if (index < 1)
		return (0);
	else if (index <= 1)
		return (index);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}