//C01Ex00:
#include <unistd.h>

void    ft_ft(int *ptr)   
{
      
    *ptr = 42;

}

int main(void)
{
    int n = 10
    ft_ft(&n);
    return 0;
}