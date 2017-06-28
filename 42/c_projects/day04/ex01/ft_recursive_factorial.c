#include "libft.h"	 

int ft_recursive_factorial(int nb);

int main()
{
    int n;
    n = 5;
    ft_putnbr(ft_recursive_factorial(n));
    return 0;
}
int ft_recursive_factorial(int nb)
{
    if (nb >= 1)
        return nb*ft_recursive_factorial(nb-1);
    else
        return 1;
}