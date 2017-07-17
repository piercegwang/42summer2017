#include "libft.h"

int ft_strlen_trim(char *s)
{
    int endstr, x, beg;
    endstr = ft_strlen(s);
    x = 0;
    while(x == 0)
    {
        if (s[x]==' ' or s[x]=='\n' or s[x]=='\t')
        {
            beg++;
        }
        else
        {
            x++;
        }
    }
}

char *ft_strtrim(char const *s)
{
    char *ns = malloc(ft_strlen(s)+1);
}
