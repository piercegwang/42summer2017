#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>

int ft_putchar(char c);
void ft_putnbr(int nb);
void ft_putstr(char *str);
int ft_strlen(char *str);
void ft_print_intarray(int *tab, int size);
void ft_swap(int *a, int *b);
char *ft_strrev(char *str);
int ft_atoi(char *str);
char *strcpy(char *s1, const char *s2);
char *ft_strncpy(char *s1, const char *s2, int n);
char *ft_strstr(const char *str, const char *to_find);

#endif
