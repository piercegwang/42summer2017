#include "libft.h"

char *ft_strdup(char *s)
{
    char *duped = malloc(ft_strlen(s)+1);
    if (duped==NULL)
        return NULL;
    ft_strcpy(duped,s);
    return duped;
}
