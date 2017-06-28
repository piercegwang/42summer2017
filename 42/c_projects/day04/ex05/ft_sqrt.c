#include "libft.h"

int ft_sqrt(int nb)
{
	int factor;
	int product;

	factor = 1;
	product = 0;
	while (factor <= nb / 2)
	{
		product = factor * factor;
		if (product == nb)
		{
			return (factor);
		}
		factor += 1;
	}
	return (0);
}

int main(void)
{
	int n, p;
	n = 99980001;
	ft_putnbr(ft_product(n));
	return 0;
}