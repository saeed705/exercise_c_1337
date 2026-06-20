//C03Ex00
#include "ft.h"
#include <unistd.h>

void    revers_to_char(int n)
{
    char c = '0' + (n % 10);
    write(1, &c, 1);
}

void     putnb(int num)
{
    if(num <0)
    {
        write(1, "-", 1);
        num = -num;
    }
    if(num <10)
    {
        revers_to_char(num);
    }
    else
    {
        putnb(num/10);
        revers_to_char(num);
    }
}

int  ft_strcmp(char *src, char *cpy)
{
    int i = 0;
    
    while(src[i] != '\0' && cpy[i] != '\0' && src[i] == cpy[i])
    {
        i++;
    }
    return src[i] - cpy[i];
    
}                                                                                                         
                       
     
