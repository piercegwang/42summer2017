#include "libft.h"	 

int ft_iterative_factorial(int nb)
{
	int c, f;
	c = nb-1;
	f = nb;
	while (c != 0)
	{
		f *= c;
		c--;
	}
	return f;
}

int main(void)
{
	int n;
	n = 10;
	ft_putnbr(ft_iterative_factorial(n));
	return 0;
}