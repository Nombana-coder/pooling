#include <stdio.h>

int	ft_atoi(char *str);

typedef struct s_test
{
	char	*str;
	int		expected;
}	t_test;

int	main(void)
{
	t_test	tests[] = {
		{"42", 42},
		{"0", 0},
		{"   -42", -42},
		{"\t\n\v\f\r 42", 42},
		{"+42", 42},
		{"+-+-42", 42},
		{"---+--+1234ab567", -1234},
		{"  ---+--+1234ab567", -1234},
		{"abc", 0},
		{"", 0},
		{"---", 0},
		{"12 34", 12},
		{"12-3", 12},
		{"+ 5", 0},
		{"0042", 42},
		{"2147483647", 2147483647},
		{"-2147483648", -2147483648},
		{NULL, 0}
	};
	int		i;
	int		res;

	i = 0;
	while (tests[i].str)
	{
		res = ft_atoi(tests[i].str);
		if (res == tests[i].expected)
			printf("OK  ");
		else
			printf("KO  ");
		printf("\"%s\" -> %d (expected %d)\n",
			tests[i].str, res, tests[i].expected);
		i++;
	}
	return (0);
}