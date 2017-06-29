#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>

int ft_atoi(char *str);
void ft_is_negative(int n);
int ft_is_prime(int nb);
int ft_iterative_factorial(int nb);
int ft_iterative_power(int nb, int power);
int ft_putchar(char c);
void ft_putnbr(int nb);
void ft_putstr(char *str);
int ft_sqrt(int nb);
int ft_strlen(char *str);
char *ft_strrev(char *str);
void ft_swap(int *a, int *b);

#endif
