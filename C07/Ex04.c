//C07Ex04:
#include <unistd.h>
#include <stdlib.h>

void    ft_putchar(char c)
{
    write(1, &c,1);
}

//Check base is true!!

int     ft_check_base(char *base )
{
    int i;
    int len;
    int j;

    len = 0;
    while(base[len] != '\0')
    {
        len++;
    }

    if(len<2)
    {
        return 0;
    }

    i = 0;
    while(base[i] != '\0')
    {
        if(base[i] == '-' || base[i] == '+' || base[i] == ' ')
        {
            return 0;
        }
        j = i +1;
        while(j<len)
        {
            if(base[j] == base[i])
            {
                return 0;
            }
            j++;
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

//Convert number from string  to intiger  atio base 
int     ft_atoi_base(char *str, char *base) 
{
    int i;
    int p;
    int len_base;
    int sing;
    int result;

    if(ft_check_base(base) == 0) return 0;

    len_base = 0;
    while(base[len_base] !='\0')
    {
        len_base++;
    }

    i= 0;
    while(str[i] == ' '|| str[i] == '\t'|| str[i] == '\n')
    {
        i++;
    }
    sing = 1;
    if(str[i]== '-' || str[i]== '+')
    {
        if(str[i] == '-')
        {
            sing = -1;
        }
        i++;
    }

    result = 0;
    p = ft_get_index(str[i], base);
    while(p!= -1)
    {
        result = result * len_base + p;
        i++;
        p = ft_get_index(str[i], base);
    }

    return result * sing;
}

//put number and calculate size of malloc
char     *ft_putnbr_base(int num, char *base)
{
    int i;
    int len_base;
    int temp;
    int len;
    int sing;
    char *new;

    if(ft_check_base(base) == 0)  return NULL;
  
    sing = 1;
    if(num<0)
    {
        num = -num;
        sing = -1;
    }

    len_base = 0;
    while(base[len_base])
    {
        len_base++;
    }
 
    len = 1;
    temp = num;
    while(temp / len_base != 0)
    {
        len++;
        temp = temp /len_base;
    }
  
    if(sing == -1)
    {
        len++;
    }
    len++;

    

    new = malloc(len * sizeof(char));
    if(new == NULL) return NULL;

    if(num == 0)
    {
        new[0] = base[0];
        new[1] = '\0';
        return new;
    }

    new[len -1] = '\0';
    i = len -2;

    while(num > 0)
    {
        new[i] = base[num % len_base];
        num = num / len_base;
        i--;
    }
    if(sing == -1)
    {
        new[0] = '-';
    }

    return new;

}


char    *ft_convert_base(char *nb, char *base_from, char *base_to)
{
    int n;
    char *arry;

    n = ft_atoi_base(nb,base_from);
    arry = ft_putnbr_base(n, base_to);
    
    return arry;
    
}

int     main(void)
{
    char *num;
    char *base_from;
    char *base_to;
    char *results;
    int i;

    num = "42";
    base_from = "0123456789";
    base_to = "01";

    results = ft_convert_base(num, base_from, base_to);

    i = 0;
    while(results[i] != '\0')
    {
        ft_putchar(results[i]);
        i++;
    }

    free(results);
    return 0;


}
