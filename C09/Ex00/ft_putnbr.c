//C04Ex02:
#include "ft.h"
#include <unistd.h>
#include <limits.h>


void    ft_putnbr(int nb)
{
    char dig;

    if(nb == INT_MIN)
    {
        write(1,"-2147483648",11);
        return ;
    }

    if(nb<0)
    {
        write(1, "-",1);
        nb = -nb;
    }
    if(nb >= 10)
    {
        ft_putnbr(nb/10);
    }

    dig = (nb%10) + '0';
    write(1,&dig,1);
}

