#include "libft.h"

int ft_iswhitespace(char c) //func to check if char c is whitespace, new line, etc.
{
    if ((9<=c && c<=13) || c == ' ')
    {
        return 1;
    }
    return 0;
}

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

int		ft_ln_w(char *str, int i) //check word length of word at int i index of char *str
{
	int count;

	count = 0;
	while (ft_iswhitespace(str[i]) == 0 && str[i])
	{
		count++;
		i++;
	}
	return (count);
}

char **ft_split_whitespaces(char *str) //main func, split whitespace
{
    char **res;
    int i,j,k;

    i = 0;
    j = 0;
    res = malloc(sizeof(char*) * (ft_word_count(str) + 1));
    if (res == NULL)
        return (NULL);
    while (str[i])
    {
        while (ft_iswhitespace(str[i])==1)
            i++;
        if (str[i])
        {
            k = 0;
            res[j] = malloc(sizeof(char) * ft_ln_w(str, i) +1); //1 was sizeof(char)
            if (res[j] == NULL)
                return (NULL);
            while (ft_iswhitespace(str[i])==0)
                res[j][k++] = str[i++];
            res[j++][k] = '\0';
        }
    }
    res[j] = NULL;
    return (res);
}

int main(void)
{
    char **res;
    int i;
    i = 0;
    res = ft_split_whitespaces("    Hello    krlr rlrllr l l l llllllll asdf.      ");
    while(res[i])
    {
        ft_putstr(res[i]);
        ft_putchar('\n');
        i++;
    }
}
