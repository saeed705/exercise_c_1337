//C07Ex00
#include "ft.h"
#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
    {
        i++;
    }
    return i;
}


char *ft_strdup(char *str)
{
    int len = ft_strlen(str);
    char *new;
    new = malloc((len +1) * sizeof(char));
    if(new == NULL)
    {
        return NULL;
    }
    
    int i = 0;
    while(str[i])
    {
        new[i] = str[i];
        i++;
    }
    new[i] = '\0';
    return new;
}


