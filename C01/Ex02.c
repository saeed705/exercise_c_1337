//C01Ex02:
#include <unistd.h>

void    ft_swap(int *x, int *y)
{
        int temp = *x;
        *x = *y;
        *y = temp;
      
}\


int main(void)
{
    int a = 1337;
    int b = 42;
    ft_swap(&a, &b);
    return 0;

}