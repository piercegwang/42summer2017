#include "libft.h"

int ft_iterative_power(int nb, int power)
{
    int c, f, cur;
    c = 1;
    cur = nb;
    while (c < power)
    {
    	cur *= nb;
    	c++;
    }
    return cur;
}

int main()
{
    int n, power;
    n = 5;
    power = 4;
    ft_putnbr(ft_iterative_power(n, power));
    return 0;
}