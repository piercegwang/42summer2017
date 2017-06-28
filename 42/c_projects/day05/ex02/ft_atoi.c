#include <unistd.h>

int	ft_putchar(char c)
{
 write(1, &c, 1);
 return 0;
}

void ft_putnbr(int nb)
{
    if(nb < 0) {
        ft_putchar('-');
        nb *= -1;
    }
    int last_num = nb % 10;
    int reduced_num = nb / 10;
    if(reduced_num != 0) {
        ft_putnbr(reduced_num);
    }
    char digit = last_num + '0';
    ft_putchar(digit);
}

void ft_putstr(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
	char x = str[i];
    ft_putchar(x);
   	++i;
	}
}

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
    char x = str[i];
    ++i;
    }
    return (i);
}

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

int main(void)
{
	char str[] = "214";
    ft_putnbr(ft_atoi(str));
}
