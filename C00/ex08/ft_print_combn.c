#include <unistd.h>

static void	ft_print_comb_str(char *comb, int n)
{
	write(1, comb, n);
	if (comb[0] != '0' + 10 - n)
		write(1, ", ", 2);
}

static void	ft_build(char *comb, int pos, int n, char start)
{
	char	d;

	if (pos == n)
	{
		ft_print_comb_str(comb, n);
		return ;
	}
	d = start;
	while (d <= '9' - (n - pos - 1))
	{
		comb[pos] = d;
		ft_build(comb, pos + 1, n, d + 1);
		d++;
	}
}

void	ft_print_combn(int n)
{
	char	comb[9];

	if (n <= 0 || n >= 10)
		return ;
	ft_build(comb, 0, n, '0');
}
