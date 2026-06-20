//C05Ex02
#include <unistd.h>

int     putnb(int num)
{
    char dig;

    if(num>9)
    {
        putnb(num/10);
    }
    dig = (num%10) + '0';
    write(1,&dig,1);
}


int     ft_iterative_power(int num, int power)
{
    int i = 1;
    int result = num;

    if(power<0)
    {
       return 0; 
    }
    else if(power == 0)
    {
        return 1;
    }
    else if(power == 1)
    {
        return num;
    }
    else{
        while(i<power)
        {
            result = result * num;
            i++;
        }
    }
  
    return result;
}

int main(void)
{
    putnb(ft_iterative_power(2,5));
    write(1,"\n",1);
    putnb(ft_iterative_power(5,8));
    write(1,"\n",1);
    putnb(ft_iterative_power(8,1));
    write(1,"\n",1);
    putnb(ft_iterative_power(1,-4));
   
    return 0;
}