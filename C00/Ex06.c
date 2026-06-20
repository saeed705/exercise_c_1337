//C00Ex06:
#include <unistd.h>

void    ft_putchar(int left, int right) // converte int to char 

{
    char num1 = '0' + (left / 10);
    char num2 = '0' + (left % 10);
    char num3 = '0' + (right / 10);
    char num4 = '0' + (right % 10);


    write(1, &num1, 1);
    write(1, &num2, 1);
    write(1, " ", 1);
    write(1, &num3, 1);
    write(1, &num4, 1);

    if(!(left == 98 && right == 99))
    {
        write(1, ", ", 2);
    }
}

void    ft_print_comb2() // print numbers from 00 to 99
{
   int left = 0;
   int right = 1;
 

   while(left <= 98)
   {
        right = left + 1;
        while(right <= 99)
        {
            ft_putchar(left, right);
            right++;
        }
    left++;
   }

}

int main(void)
{
    ft_print_comb2();
    return 0;
}