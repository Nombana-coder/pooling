int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

#include <stdio.h>
int main(void)
{
    printf("%d\n", ft_strlen("Hello, World!"));
    printf("%d\n", ft_strlen(""));
    printf("%d\n", ft_strlen("This is a longer string."));
    return (0);
}