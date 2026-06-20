//C03Ex01
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


int     ft_strncmp(char *src, char *cpy, int size)
{
    int i = 0;

    while(i<size && src[i] && cpy[i] && src[i] == cpy[i] )
    {
        i++;
    }
    return src[i] - cpy[i];
}

int main(void)
{
    char src[] = "Hello";
    char cpy[] = "Hello";

   int n =  ft_strncmp(src, cpy, 4);
   int i = ft_strncmp("Hello", "HellO", 5);

    putnb(n);
    write(1,"\n",1);
    putnb(i);
    return 0;
}