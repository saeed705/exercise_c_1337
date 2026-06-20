//C08EX04.c
#include <stdlib.h>
#include <unistd.h>
#include "Ex04.h"


int ft_size_of_word(char *word)
{
    int len;
    len = 0;
    while(word[len])
    {
        len++;
    }
    return len;
}


char  *ft_strdup(char *str)
{
    int i;
    int len;
    char *new;

    i = 0;
    len = ft_size_of_word(str);
    
    new = malloc((len+1) * sizeof(char));
    if(new == NULL) return NULL;

    while(str[i])
    {
        new[i] = str[i];
        i++;
    }
    new[i] = '\0';
    return new;
}

t_stock_str *ft_strs_to_tab(int ac, char **av)
{
    int i;
    t_stock_str *result;

    result = malloc((ac+1) * sizeof(t_stock_str));
    if(result == NULL) return NULL;

    i = 0;
    while(i<ac)
    {
        result[i].size = ft_size_of_word(av[i]);
        result[i].str = av[i];
        result[i].copy = ft_strdup(av[i]);
        i++;   
    }

    result[ac].size = 0;
    result[ac].str = NULL;
    result[ac].copy = NULL;

    return result;

}


// void    ft_putstr(char *c)
// {
//     int i;
//     i = 0;
//     while(c[i])
//     {
//         i++;
//     }

//     write(1, c, i);
// }


// int main(void)
// {
//     t_stock_str *result;


//     char *av[] = {"Hello", "mohamed", "IN lear company "};
//     int i;

//     result = ft_strs_to_tab(3, av);
//     i = 0;
//     while(i<3)
//     {
//         ft_putstr(result[i].str);
//         write(1," ",1);
//         i++;
//     }

//     i = 0;
//     while(i<3)
//     {
//         free(result[i].copy);
//         i++;
//     }
//     free(result);

//     return 0;
// }