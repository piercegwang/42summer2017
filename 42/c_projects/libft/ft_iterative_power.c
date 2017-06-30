#include "libft.h"

int ft_iterative_power(int nb, int power)
{
    int c, cur;
    c = 1;
    cur = nb;
    while (c < power)
    {
    	cur *= nb;
    	c++;
    }
    return cur;
}
