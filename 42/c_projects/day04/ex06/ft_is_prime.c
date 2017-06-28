#include "libft.h"

int	ft_is_prime(int nb)
{
	int	i;
	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int main(void)
{
	int n, p;
	n = 7;
	ft_putnbr(ft_is_prime(n));
	return 0;
}
