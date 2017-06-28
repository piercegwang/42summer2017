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

int ft_find_next_prime(int);

int main(void)
{
	int n, p;
	n = 16;
	ft_putnbr(ft_find_next_prime(n));
	return 0;
}
int ft_find_next_prime(int nb)
{
  if (ft_is_prime(nb) == 1)
    return nb;
  else
    return ft_find_next_prime(nb+1);
}
