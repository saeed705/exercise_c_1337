//C05Ex03
#include <unistd.h>

int     ft_putnb(int num)
{
    char dig;

    if(num>9)
    {
        ft_putnb(num/10);
    }
    dig = (num%10) + '0';
    write(1,&dig, 1);
}


int     ft_recusive_power(int num, int power)
{
    int i = 0;
    int result = 1;
    if(power<0)
    {
        return 0;
    }
    else if(power == 0)
    {
        return 1;
    }
    else{
        
        result = num * ft_recusive_power(num,power - 1);
        
    }
    return result;
}

int main(void)
{
    ft_putnb(ft_recusive_power(2,4));
    write(1,"\n",1);
    ft_putnb(ft_recusive_power(5,3));
    write(1,"\n",1);
    ft_putnb(ft_recusive_power(4,1));
    write(1,"\n",1);
    ft_putnb(ft_recusive_power(2,-6));

    return 0;
}