#include "libft.h"

char *ft_strdup(char *s)
{
    char *d = malloc(ft_strlen(s)+1);
    if (d==NULL)
        return NULL;
    ft_strcpy(d,s);
    return d;
}

int main(void)
{
    char s[10] = "Helloworld";
    char *d;
    d = ft_strdup(s);
    ft_putstr(d);
}
