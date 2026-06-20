//C01Ex02:
#include "ft.h"
#include <unistd.h>

void    ft_swap(int *x, int *y)
{
        int temp = *x;
        *x = *y;
        *y = temp;
      
}