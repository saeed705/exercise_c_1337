//C05Ex01:
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


int     ft_recursive_factorial(int num)
{

    if(num<0)
    {
        return 0;
    }
    if(num == 0)
    {
        return 1;
    }
    
    int result = num;

    if(num> 1)
    {
        result *= ft_recursive_factorial(num -1);
        
    }

    return result;

}

int main(void)
{
    ft_putnb(ft_recursive_factorial(5));
    write(1,"\n",1);
    ft_putnb(ft_recursive_factorial(7));
    write(1,"\n",1);
    ft_putnb(ft_recursive_factorial(-33));
    write(1,"\n",1);
    ft_putnb(ft_recursive_factorial(0));
    return 0;
    
}