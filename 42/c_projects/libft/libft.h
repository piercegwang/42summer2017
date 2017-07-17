#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>

typedef struct s_fun {
    int c;
    char k;
}   t_fun;

int ft_putchar(char c);
void ft_putnbr(int nb);
void ft_putstr(char *str);
int ft_strlen(char *str);
void ft_print_intarray(int *tab, int size);
void ft_swap(int *a, int *b);
char *ft_strrev(char *str);
int ft_atoi(char *str);
char *ft_strcpy(char *s1, const char *s2);
char *ft_strncpy(char *s1, const char *s2, int n);
char *ft_strstr(const char *str, const char *to_find);
int	ft_strcmp(const char *s1, const char *s2);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strupcase(char *str);
char	*ft_strlowcase(char *str);
char    *ft_strcapitalize(char *str);
int	ft_isalpha(char c);
int	ft_str_is_alpha(char *str);
int	ft_isdigit(char c);
int	ft_str_is_numeric(char *str);
int	ft_isalnum(int c);
int	ft_str_is_lowercase(char *str);
int	ft_isprint(char c);
int	ft_str_is_printable(char *str);
char	*ft_strcat(char *dest,	const char *src);
char	*ft_strncat(char *dest, const char *src, size_t nb);
int		ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int		ft_check_base(char *base);
void	ft_putnbr_base(int nbr, char *base);
int	ft_inbase(char c, int base);
int	ft_atoi_base(char *str, int base);
int	ft_str_is_uppercase(char *str);
char *ft_strdup(char *s);
int ft_iswhitespace(char c);
int ft_word_count(char *str);
int	ft_ln_w(char *str, int i);
char **ft_split_whitespaces(char *str);

#endif
