//C04Ex05:
#include <stdio.h>

int     ft_check_base(char *base)
{
    int i = 0;
    int len = 0;
    int n = 0;

    while(base[len])
    {
        len++;
    }

    if(len<2)
    {
        return 0;
    }

    while(base[i] != '\0')
    {
        if(base[i] == '-' || base[i] == '+'|| base[i] == ' ')
        {
            return 0;
        }
        n = i + 1;
        while(n<len)
        {
            if(base[i] == base[n])
            {
                return 0;
            }
            n++;
        }
        i++;
    }

    return 1;

}

int  ft_get_index(char c, char *base)
{
    int i = 0;
    while(base[i])
    {
        if(c == base[i])
        {
            return i;
        }
        i++;
        
    }
    return -1;
}

int     ft_atoi_base(char *str, char *base)
{
    int i = 0;
    int n = 0;
    int len_base = 0;
    int sing = 1;
    int result = 0;

    if(ft_check_base(base) == 0)
    {
        return 0;
    }

    while(base[len_base])
    {
        len_base++;
    }

    while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
    {
        i++;
    }
    if(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
        {
            sing = -1;
        }
        i++;
    }
    
    n = ft_get_index(str[i], base);
    while(n!= -1)
    {
        result = result * len_base + n;
        i++;
        n = ft_get_index(str[i], base);
    }

    return result * sing;
}


int     main(void)
{
    char desimal[] = "0123456789";
    char binary[] = "01";
    char hex[] = "0123456789ABCDEF";
    
    int d = ft_atoi_base("42", desimal);

    int b = ft_atoi_base("101010", binary);

    int h = ft_atoi_base("2A", hex);

    printf("%d\n", d);
    printf("%d\n", b);
    printf("%d\n", h);

    return 0;
}