//C01Ex04:
#include <unistd.h>

void    ft_ultimate_div_mod(int *x, int *y)
{
    int temp = *x;
    *x = temp / *y;
    *y = temp % *y;

}

int main(void)
{
    int x = 10;
    int y = 2;
    ft_ultimate_div_mod(&x,&y);
    return 0;

}