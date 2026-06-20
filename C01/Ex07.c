//C01Ex07;
#include <unistd.h>


void    converte_to_char(int num)
{
    char c = '0' + (num % 10);
    write(1, &c, 1);
}

void    putnum(int num)
{
    if(num < 0)
    {
        write(1, "-", 1);
        num = -num;
    }
    if(num < 10)
    {
        converte_to_char(num);
        
    }
    else
    {
        putnum(num / 10);
        converte_to_char(num);
    }
}

void    ft_rev_int_tab(int *arr, int size)
{
    int n = size - 1;
    int i = 0;

     while(i < n)
     {
        int temp = arr[i];
        arr[i] = arr[n];
        arr[n] = temp;
        i++;
        n--;
     }
}

int  main(void)
{
    int numbers[] = {1,2,3,4,5};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int i = 0;
    ft_rev_int_tab(numbers, size);
    while(i < size)
    {
        putnum(numbers[i]);
        i++;
    }
    write(1,"\0",1);
    return 0;
    
}