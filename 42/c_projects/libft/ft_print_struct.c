#include "libft.h"


void ft_print_struct(void)
{
    t_fun *rohan;
    rohan = malloc(sizeof(t_fun));
    rohan->c = 42;
    ft_putnbr(rohan->c);
}
