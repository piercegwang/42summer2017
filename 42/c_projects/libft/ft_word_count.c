#include "libft.h"

int ft_word_count(char *str) //check word count of string regardless of space number
{
    int word_count;
    word_count = 0;
    while(*str)
    {
        if (!ft_iswhitespace(*str))
        {
            while(!ft_iswhitespace(*str))
                str++;
                if(*str == '\0')
                    break;
            word_count++;
        }
        str++;
    }
    return word_count;
}
