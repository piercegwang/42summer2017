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
 
void ft_ultimate_div_mod(int *a, int *b)
{
	int tempa;
	if (b != 0)
	{
		tempa = *a;
		*a = *a / *b;
		*b = tempa % *b;
	}
}


int main(void)
{
	int a = 19;
	int b = 3;
	ft_ultimate_div_mod(&a,&b);
	ft_putnbr(a);
	ft_putchar(' ');
	ft_putnbr(b);
}