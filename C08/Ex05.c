#include "Ex04.h"
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>


t_stock_str *ft_strs_to_tab(int ac, char **av);
void    ft_putstr(char *word)
{
    int i;
    i = 0;

    while(word[i])
    {
        i++;
    }
    write(1,word,i);
}

void    ft_putnbr(int num)
{
    char dig;
    int i;

    if(num == INT_MIN)
    {
        write(1,"-2147483648",11);
        return ;
    }

    if(num<0)
    {
        write(1,"-",1);
        num = -num;
    }

    if(num>9)
    {
        ft_putnbr(num/10);
    }
    dig = (num%10) + '0';
    write(1,&dig,1);

}


void    ft_show_tab(t_stock_str *par)
{
    int i;
    i = 0;
    while(par[i].str != NULL)
    {
        ft_putnbr(par[i].size);
        write(1,"\n",1);
        ft_putstr(par[i].str);
        write(1,"\n",1);
        ft_putstr(par[i].copy);
        write(1,"\n",1);
        i++;
    }

}


int     main(void)
{
    t_stock_str * result;

    char *av[] = {"Hello", "Mohamed said", "in", "Lear company"};
    int i;

    result = ft_strs_to_tab(4, av);
    ft_show_tab(result);

    i = 0;
    while(i<4)
    {
        free(result[i].copy);
        i++;
    }
    free(result);
    return 0;

}



