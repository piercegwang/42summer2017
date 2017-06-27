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

void ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a/b;
		*mod = a%b;
	}
}

int main()
{
	int a = 10;
	int b = 3;
	int div;
	int mod;

	ft_div_mod(a,b, &div, &mod);
	ft_putnbr(div);
	ft_putnbr(mod);
}