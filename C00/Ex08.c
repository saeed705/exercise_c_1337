//C00Ex07
#include <unistd.h>

void       ft_putchar(char c)
{
    write(1,&c,1);
}

void    ft_print_arr(int n , int *arr)
{
    int i = 0;
    while(i<n)
    {
        ft_putchar(arr[i] + 48);
        i++;
    }
    if(arr[0] != 10 - n)
    {
        ft_putchar(',');
        ft_putchar(' ');
    }

}

void       ft_generatComboss(int n, int value, int index, int *arr)
{
    if(index == n)
    {
        ft_print_arr(n,arr);
        return;
    }
    while(value<=9)
    {
        arr[index] = value;
        ft_generatComboss(n, value+1, index +1, arr);
        value++;
    }
}

void       ft_print_combn(int n)
{
    int arr[9];
    if(n>=0 && n<=9)
    {
        ft_generatComboss(n,0,0,arr);
    }
}

int main(void)
{
    int i;
    int count;
    char c;
    count = 1;
    i= 0;

    while(i<=9)
    {
        c = count + '0';
        write(1,&c,1);
        write(1,"\n",1);
        ft_print_combn(count);
        write(1,"\n",1);
        count++;
        i++;
    }

    return 0;
}