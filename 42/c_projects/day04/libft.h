#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>

int ft_putchar(char c)
{
 write(1, &c, 1);
 return 0;
}

void ft_putnbr(int nb)
{
    if(nb < 0) {
        ft_putchar('-');
        nb *= -1;
    }
    int last_num = nb % 10;
    int reduced_num = nb / 10;
    if(reduced_num != 0) {
        ft_putnbr(reduced_num);
    }
    char digit = last_num + '0';
    ft_putchar(digit);

}

void ft_putstr(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
    char x = str[i];
    ft_putchar(x);
    ++i;
    }
}

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
    char x = str[i];
    ++i;
    }
    return (i);
}

void ft_print_intarray(int *tab, int size)
{
    int i;
    i = 0;
    while (i<size)
    {
        ft_putnbr(tab[i]);
        i++;
    }
}

void ft_swap(int *a, int *b)
{
    int s;

    s = *a;
    *a = *b;
    *b = s;
}


char *ft_strrev(char *str)
{
    int i;
    int l;
    char t;

    l = 0;
    while (str[l] != '\0')
        l++;
    i = -1;
    while (++i < --l)
    {
        t = str[i];
        str[i] = str[l];
        str[l] = t;
    }
    return (str);
}

int ft_atoi(char *str) //Does not take other characters
{
    int i;
    int nbr;
    int negative;

    nbr = 0;
    negative = 0;
    i = 0;
    if (str[i] == '-')
        negative = 1;
    if (str[i] == '+' || str[i] == '-')
        i++;
    while ((str[i] >= '0') && (str[i] <= '9'))
    {
        nbr *= 10;
        nbr += (int)str[i] - '0';
        i++;
    }
    if (negative == 1)
        return (-nbr);
    else
        return (nbr);
}

#endif
