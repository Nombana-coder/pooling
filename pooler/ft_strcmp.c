int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (s1 - s2);
}


#include <stdio.h>
int	main(void)
{
	printf("%d", ft_strcmp("azerty", "azerty"));
	printf("\n");
	printf("%d", ft_strcmp("azerty", "zzerty"));
	return (0);
}
