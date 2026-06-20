//C07ex02
#include <unistd.h>
#include <stdlib.h>

void    ft_putnb(int n)
{
    char dig;
    if(n<0)
    {
        write(1,"-",1);
        n = -n;
    }
    if(n>9)
    {
        ft_putnb(n/10);
    }
    dig = (n%10) + '0';
    write(1,&dig,1);
}


int     *ft_ultimate_range(int *size, int min, int max)
{
    int range;
    int i;
    int *arr;

    if(min>= max)
    {
        *size  = 0;
        return NULL;
    }
    
    range = max - min;
    *size = range;
    arr = malloc(range * sizeof(int));

    if(arr == NULL) 
    {
        *size = 0;
        return NULL;
    }

    i = 0;
    while(i<range)
    {
        arr[i] = min + i;
        i++;
    }

    return arr;
}


int     main(void)
{
    int i;
    int min;
    int max;
    int size;
    int *arr;

    min = 3;
    max = 8;
    size = 0;

    arr = ft_ultimate_range(&size, min,max);
    if(arr == NULL) return 0;

    i = 0;
    while(i<size)
    {
        ft_putnb(arr[i]);
        i++;

    }
    write(1,"\n",1);
    ft_putnb(size);

    free(arr);
    return 0;

}