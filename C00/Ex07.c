//C00Ex07
#include <unistd.h>

void    ft_potchar(int num)
{
    char c = '0' + (num % 10);
    write(1, &c, 1);
}


void    ft_potnum(int num)
{

    if(num <0)
    {
        write(1, "-", 1);
        num = -num;
        ft_potnum(num);
        
    }

   else if(num < 10)
    {
       
       ft_potchar(num);
    }
    
    else{
        ft_potnum(num / 10);
        ft_potchar(num);
    }

}

int main(void)
{
    ft_potnum(-6436123);
    return 0;

}