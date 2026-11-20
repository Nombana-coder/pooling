int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n && s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	if(i == n)
		return (0);
	return (s1[i] - s2[i]);
}

#include <stdio.h>
int	main(void)
{
	printf("%d", ft_strncmp("azertyp", "azerty", 6));
	printf("\n");
	printf("%d", ft_strncmp("azerty", "zzerty", 4));
	printf("\n");
	printf("%d", ft_strncmp("azerty", "azetty", 3));
	return (0);
}