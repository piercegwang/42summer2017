#include "libft.h"

int ft_iswhitespace(char c);
int ft_word_count(char *str);

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
