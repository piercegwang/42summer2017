#include <unistd.h>

int	ft_putchar(char c)
{
 write(1, &c, 1);
 return 0;
}

int ft_putnumber(int n)
{
	write(1, &n, 1);
	return 0;
} //nupe, not working

void ft_ft(int *nbr)
{
	*nbr = 42;
}

int main()
{
	int nbr = 5;
	ft_ft(&nbr);
	ft_putnumber(nbr);
}
//I didn't get to the putnumber exercises yesterday, so I don't have a put number function... Sorry!