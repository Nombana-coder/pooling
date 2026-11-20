#include <unistd.h>
void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main(void)
{
    ft_putstr("Hello, World!\n");
    ft_putstr("This is a test string.\n");
    ft_putstr("Another line.\n");
    return (0);
}