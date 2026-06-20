//C07ex01
#include <unistd.h>
#include <stdlib.h>


void    ft_putnb(int n)
{
    char dig;

    if(n<0)
    {
        write(1,"-",1);
        n=-n
    }
 
    if(n>9)
    {
        ft_putnb(n/10);
    }
    dig = (n%10) + '0';
    write(1,&dig,1);
}

int     *ft_range(int min, int max)
{
    int i;
    int size;
    int *arr;

    
    if(min>= max) return NULL;
    size = max - min;
    
    arr = malloc(size * sizeof(int));
    if(arr == NULL) return NULL;
    
    i = 0;
    while(i<size)
    {
        arr[i] = min + i;
        i++;
    }
    
    return arr;
}

int     main(void)
{
    int i;
    int size;
    int min, max;
    int *arr;
    min = 2;
    max = 10;
    arr = ft_range(min, max);
    
    if(arr == NULL)  return 0;

    i = 0;
    size = max - min;
    while(i<size)
    {
        ft_putnb(arr[i]);
        i++;
    }
    free(arr);

    return 0;
}