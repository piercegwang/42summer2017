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

int ft_print_intarray(int *tab, int size)
{
    int i;
    i = 0;
    while (i<size)
    {
        ft_putnbr(tab[i]);
        i++;
    }
}

void ft_sort_integer_table(int *tab, int size)
{
    int s, temp, changes;
    s = 0;
    changes = 0;
    while (changes != 0)
    {
        s = 0;
        changes = 0;
        while (s <= size-1)
        {
            if (tab[s] > tab[s+1])
            {
                temp = tab[s];
                tab[s] = tab[s+1];
                tab[s+1] = temp;
                changes++;
            }
            s++;
        }
    }
}

int main(void)
{
	int intTable[] = {19, 10, 8, 17, 9};
    ft_sort_integer_table(intTable,5);
    ft_print_intarray(intTable,5);
}