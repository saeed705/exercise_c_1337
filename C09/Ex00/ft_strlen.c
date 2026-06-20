//C01Ex06:
#include "ft.h"
#include <unistd.h>


int     ft_strlen(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return i;
}

