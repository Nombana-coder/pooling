char *ft_strcat(char *dest, char *src)
{
    int i;
    int j;

    i = 0;
    while (dest[i])
        i++;
    j = 0;
    while (src[j])
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return (dest);
}

#include <stdio.h>
int main(void)
{
    char dest[50] = "Hello, ";
    char src[] = "World!";
    printf("%s\n", ft_strcat(dest, src));
    return (0);
}