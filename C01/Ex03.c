//C01Ex03:
#include <unistd.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}


int main(void)
{
    int a = 10;
    int b = 5;
    int div, mod;

    ft_div_mod(a,b, &div, &mod);
    return 0;
}