#include <unistd.h>

int	ft_putchar(char c)
{
 write(1, &c, 1);
 return 0;
}


void ft_print_alphabet()
{
	int i = 0;
	char alphabet[] = "zyxwvutsrqponmlkjihgfedcba";
	while (alphabet[i] != '\0')
	{
	char x = alphabet[i];
    ft_putchar(x);
   	++i;
	}
}

int main()
{
	ft_print_alphabet();
	return 0;
}