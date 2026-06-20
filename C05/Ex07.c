//C05Ex07
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


int     ft_find_next_prime(int num)
{
    int i;

    if(num<=2)
    {
        return 2;
    }

    if(ft_is_prime(num) == 1) return num;
    else
    {
        i = num;
        while(1)
        {
            if(ft_is_prime(i) == 1) return i;
            i++;
        }
    }
}

int main(void)
{
    ft_putnb(ft_find_next_prime(3));
    write(1,"\n",1);
    ft_putnb(ft_find_next_prime(6));
    write(1,"\n",1);
    ft_putnb(ft_find_next_prime(10));
    write(1,"\n",1);
    ft_putnb(ft_find_next_prime(-5));
    write(1,"\n",1);
    ft_putnb(ft_find_next_prime(1));
    return 0;
    
}