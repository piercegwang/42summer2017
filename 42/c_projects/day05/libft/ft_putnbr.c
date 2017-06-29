#include "libft.h"

void ft_putnbr(int nb)
{

    int last_num = nb % 10;
    long reduced_num = nb / 10;
    if(last_num < 0) {
        ft_putchar('-');
        reduced_num *= -1;
        last_num *= -1;
    }
    if(reduced_num != 0) {
        ft_putnbr(reduced_num);
    }
    char digit = last_num + '0';
    ft_putchar(digit);

}
