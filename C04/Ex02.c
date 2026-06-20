//C04Ex02:
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


int main(void)
{
    int i = 1344;
    int n = -31;
    int c = 3;
    
    ft_putnbr(i);
    write(1,"\n",1);
    ft_putnbr(n);
    write(1,"\n",1);
    ft_putnbr(c);
    return 0;
}