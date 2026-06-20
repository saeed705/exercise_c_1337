//C05Ex05
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

int     ft_sqrt(int num)
{
    int i = 1;

    if(num<0 || num == 0)
    {
        return 0;
    }

    while(i*i<=num)
    {
        if(i*i == num)
        {
            return i;

        }
        i++;
    }
    return 0;


}


int main(void)
{
    ft_putnb(ft_sqrt(6));
    write(1,"\n",1);
    ft_putnb(ft_sqrt(4));
    write(1,"\n",1);
    ft_putnb(ft_sqrt(9));
    write(1,"\n",1);
    ft_putnb(ft_sqrt(10));
    write(1,"\n",1);
    ft_putnb(ft_sqrt(16));
    
    return 0;
}