//C04Ex3:
#include "ft.h"
#include <stdio.h>

int     ft_atio(char *src)
{
    int i = 0;
    int sing = 1;
    int result = 0;

    
    
        while(src[i] == ' ' || src[i] == '\n' || src[i] == '\t')
        {
            i++;
        }
        if(src[i] == '-' || src[i] == '+')
        {
            if(src[i] == '-' )
            {
              sing = -1;  
            }
            i++;
        }
        
        while(src[i] >= '0' && src[i] <= '9')
        {
            result = result * 10 + (src[i] -'0');
            i++;
        }
       
    return result *sing;
}

