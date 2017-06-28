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


int main(void)
{
	char str[] = "hello world";
	ft_putstr(str);
}
