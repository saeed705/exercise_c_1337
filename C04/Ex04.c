//C04Ex04:
#include <unistd.h>

int check_base(char *base)
{
    int  i = 0;
    int len = 0;
    int j = 0;

    while(base[len] != '\0')
    {
        len++;
    }
    
    if(len<2)
    {
        return 0;
    }

    while(base[i] != '\0')
    {
        if(base[i] == '-' || base[i] == '+' || base[i] == ' ')
        {
            return 0;
        }
        j = i + 1;
        while(j<len)
        {
            if(base[i] == base[j])
            {
                return 0;
            }
            j++;
        }
        i++;
    }
    return 1;

}

void     ft_putnbr_base(int num, char *base)
{
    int i = 0;
    int len_base = 0;
    char dig;

    if(check_base(base) == 0)
    {
        return ;
    }

    while(base[len_base])
    {
        len_base++;
    }

    if(num<0)
    {
        write(1,"-",1);
        num = -num;
    }
    if(num>=len_base)
    {
        ft_putnbr_base(num / len_base, base);
    }
    dig = base[num % len_base] ;
    write(1,&dig, 1);

}

int main(void)
{
    int num = 42;
    ft_putnbr_base(num, "0123456789"); 
    write(1,"\n",1);
    ft_putnbr_base(num, "01");
    write(1,"\n",1);
    ft_putnbr_base(num, "0123456789ABCDEF");
    write(1,"\n",1);
    ft_putnbr_base(num, "poneyvif");
    return 0;
                                               
}