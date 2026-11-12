#include <unistd.h>

static void	ft_print_two_digits(int n)
{
	char	digits[2];

	digits[0] = n / 10 + '0';
	digits[1] = n % 10 + '0';
	write(1, digits, 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_two_digits(a);
			write(1, " ", 1);
			ft_print_two_digits(b);
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
