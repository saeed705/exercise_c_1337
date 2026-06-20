//C05Ex00:
#include <unistd.h>

int     ft_putnb(int n)
{
    char dig;

    if(n>9)
    {
        ft_putnb(n/10);
    }
    
    dig = (n%10) + '0';
    write(1,&dig,1);
}


int     ft_iterative_factorial(int num)
{
    int i = 1;
    int result = 1;

    if(num == 0)
    {
        return 0;
    }
    if(num < 0)
    {
        return 1;
    }
    
    while(i<=num)
    {
        result =  result * i;
        i++;
        
        
    }
    return result;
}


int main(void)
{
    ft_putnb(ft_iterative_factorial(5));
    write(1,"\n",1);
    ft_putnb(ft_iterative_factorial(0));
    write(1,"\n",1);
    ft_putnb(ft_iterative_factorial(2));
    write(1,"\n",1);
    ft_putnb(ft_iterative_factorial(-88));
    
   return 0;
}
