#include "libft.h"

#define DIFF(a,b) ((a<b) ? (b-a) : (a-b))

void	solution(int n, int *hist)
{
	int i;
	int j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			if (j == hist[i])
				ft_putchar(j + 48 + 1);
			j++;
		}
		i++;
	}
	ft_putchar('\n');
}

void	solve(int n, int col, int *hist)
{
	int i;
	int j;

	if (col == n)
	{
		solution(n, hist);
	}
	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < col && !(hist[j] == i || DIFF(hist[j], i) == col - j))
			j++;
		if (j < col)
		{
			i++;
			continue;
		}
		hist[col] = i;
		solve(n, col + 1, hist);
		i++;
	}
}

void	ft_eight_queens_puzzle(void)
{
	int hist[8];

	solve(8, 0, hist);
}

int main(void)
{
  ft_eight_queens_puzzle();
}
