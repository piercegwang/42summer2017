#include "libft.h"

int ft_strlen(char *str)
{
    int i = 0;
    char x;
    while (str[i] != '\0')
    {
    x = str[i];
    ++i;
    }
    return (i);
}
