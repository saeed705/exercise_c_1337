//C01Ex08:
#include <unistd.h>

void    revers_to_char(int n)
{
    char c = '0' + (n % 10);
    write(1, &c, 1);
}

void     putnb(int num)
{
    if(num <0)
    {
        write(1, "-", 1);
        num = -num;
    }
    if(num <10)
    {
        revers_to_char(num);
    }
    else
    {
        putnb(num/10);
        revers_to_char(num);
    }
}

void    swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void     ft_sort_int_tab(int *arr, int size)
{
    
    int n = size -1;
    int i = 0;
    
    
    while(i<n)
    { 
        int min = i;
        int j = i + 1;
        while(j<=n)
        {
           if(arr[j] < arr[min])
           {
                min = j;
           }
           j++;
        }
        if(min != i)
        {
            swap(&arr[min], &arr[i]);
        }
     
        i++;
       
    }
}
/*
this is anoter solotion
void     ft_sort_int_tab(int *arr, int size)
{
    
    int i = 0;
    int j = 0;
    

    while(i<size -1)
    {
         while(j<size -1)
         {
            if(arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j+1]);
            }
            j++;
         }
         i++;
    }
}
*/

int main(void)
{
    int numbers[] = {5,3,1,2,4};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int i = 0;

    ft_sort_int_tab(numbers, size);

    while(i<size)
    {
        putnb(numbers[i]);
        i++;
    }

    return 0;
}