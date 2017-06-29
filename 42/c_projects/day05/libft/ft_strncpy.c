#include "libft.h"

char *ft_strncpy(char *s1, const char *s2, int n)
{
    char *s = s1;
    int stop, c;
    stop = n;
    c = 1;
    while (((*s++ = *s2++) != 0) && (c != stop))
    {
            c++;
    }
    return (s1);
}
