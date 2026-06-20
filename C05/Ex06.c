//C05Ex06
#include <unistd.h>

int     ft_putnb(int num)
{
    char dig;
    if(num>9)
    {
        ft_putnb(num/10);

    }
    dig = (num%10) + '0';
    write(1,&dig,1);
}

int     ft_is_prime(int  num)
{
    int i = 2;
    if(num<=1)
    {
        return 0;
    }

    while(i<= num-1)
    {
        if(num % i == 0)
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int main(void)
{
    ft_putnb(ft_is_prime(2));
    write(1,"\n",1);
    ft_putnb(ft_is_prime(7));
    write(1,"\n",1);
    ft_putnb(ft_is_prime(1));
    write(1,"\n",1);
    ft_putnb(ft_is_prime(-4));
    write(1,"\n",1);
    ft_putnb(ft_is_prime(55));
    return 0;
    
}