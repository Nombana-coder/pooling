#include <unistd.h>

static void	ft_putnbr_long(long n)
{
	char	c;

	if (n >= 10)
		ft_putnbr_long(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	ft_putnbr_long(n);
}
