#include "libft.h"	 

int ft_recursive_power(int, int);

int main(void)
{
	int n, p;
	n = 10;
	p = 3;
	ft_putnbr(ft_recursive_power(n, p));
	return 0;
}
int ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	return (nb * ft_recursive_power(nb, power - 1));
}