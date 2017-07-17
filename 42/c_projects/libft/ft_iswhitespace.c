#include "libft.h"

int ft_iswhitespace(char c) //func to check if char c is whitespace, new line, etc.
{
    if ((9<=c && c<=13) || c == ' ')
    {
        return 1;
    }
    return 0;
}
