#include <unistd.h>

void ft_putnbr(int nb)
{

    int last_num = nb % 10;
    long reduced_num = nb / 10;
    if(last_num < 0) {
        ft_putchar('-');
        reduced_num *= -1;
        last_num *= -1;
    }
    if(reduced_num != 0) {
        ft_putnbr(reduced_num);
    }
    char digit = last_num + '0';
    ft_putchar(digit);

}

void ft_swap(int *a, int *b)
{
	int s;
	s = *a
	*a = *b
	*b = s
}
int main(void)
{
	int a = 8;
	int b = 16;
	ft_swap(a,b)
	ft_putnbr(a)
	ft_putnbr(b)
}
