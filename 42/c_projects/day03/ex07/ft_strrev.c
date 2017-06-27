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

char *ft_strrev(char *str)
{
    int i;
    int l;
    char t;

    l = 0;
    while (str[l] != '\0')
        l++;
    i = -1;
    while (++i < --l)
    {
        t = str[i];
        str[i] = str[l];
        str[l] = t;
    }
    return (str);
}


int main(void)
{
	char str[] = "hello world";
    char *revstring;
    revstring = ft_strrev(str);
    ft_putstr(revstring);
}

