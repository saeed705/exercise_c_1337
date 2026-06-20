//C07Ex00
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

int main(void)
{
    int i = 0;
    char *copy = ft_strdup("hello");

   if(copy == NULL)
   {
    return 0;
   }

    while(copy[i])
    {
        write(1,&copy[i],1);
        i++;
    }
    write(1,"\n",1);
    free(copy);

    
    return 0;
}
