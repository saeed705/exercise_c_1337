//C05Ex04
#include <unistd.h>


int     ft_putnb(int num)
{
    char dig;
    if(num<0)
    {
        write(1,"-",1);
        num = -num;
    }
    if(num>9)
    {
        ft_putnb(num/10);
    }
    dig = (num%10) + '0';
    write(1,&dig,1);
}


int     ft_fibonacci(int num)
{
    int i = 0;
    int fib = 0;

    if(num<0)
    {
        return -1;
    }
    else if(num == 0)
    {
        return 0;
    }
    else if(num == 1)
    {
        return 1;
    }
    else{
        fib = ft_fibonacci(num-1) + ft_fibonacci(num-2);
    }
    return fib;
    
}


int main(void)
{
    ft_putnb(ft_fibonacci(6));
    write(1,"\n",1);
    ft_putnb(ft_fibonacci(10));
    write(1,"\n",1);
    ft_putnb(ft_fibonacci(0));
    write(1,"\n",1);
    ft_putnb(ft_fibonacci(-7));
    write(1,"\n",1);
    return 0;
}