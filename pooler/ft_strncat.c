char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i;
    int j;

    i = 0;
    while (dest[i])
        i++;
    j = 0;
    while (j < nb && src[j])
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
    printf("%s\n", ft_strncat(dest, src, 3));
    return (0);
}