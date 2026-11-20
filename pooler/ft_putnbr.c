#include <unistd.h>
void    ft_putnbr(int nb)
{
    char    output;

    if (nb == -2147483648)
    {
        write (1, "-2147483648", 11);
        return ;
    }
    else if (nb < 0)
    {
        nb = -nb;
        write(1, "-", 1);
    }
    if (nb >= 10)
        ft_putnbr(nb / 10);
    write(1, &(char){(nb % 10) + '0'}, 1);
}

int main(void)
{
    ft_putnbr(-2147483648);
    write(1, "\n", 1);
    ft_putnbr(42);
    write(1, "\n", 1);
    ft_putnbr(-145);
    write(1, "\n", 1);
    ft_putnbr(0);
    write(1, "\n", 1);
    ft_putnbr(-2);
    write(1, "\n", 1);
    ft_putnbr(2147483647);
    return (0);
}