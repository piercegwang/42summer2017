#include "libft.h"

int ft_atoi(char *str)
{
    int i;
    int nbr;
    int negative;

    nbr = 0;
    negative = 0;
    i = 0;
    /*
    while (((str[i] != '0') || (str[i] != '1') || (str[i] != '2') ||
            (str[i] != '3') || (str[i] != '4') || (str[i] != '5') ||
            (str[i] != '6') || (str[i] != '7') || (str[i] != '8') ||
            (str[i] != '9') || (str[i] != '-') || (str[i] != '+')) && (str[i] != '\0'))
    {
        i++;
    }
    */
    if (str[i] == '-')
        negative = 1;
    if (str[i] == '+' || str[i] == '-')
        i++;
    while ((str[i] >= '0') && (str[i] <= '9'))
    {
        nbr *= 10;
        nbr += (int)str[i] - '0';
        i++;
    }
    if (negative == 1)
        return (-nbr);
    else
        return (nbr);
}
