//C07Ex03:
#include <unistd.h>
#include <stdlib.h>


void    ft_putchar(char c)
{
    write(1,&c,1);
}

int    ft_size_of_word(char *word)
{
    int i;
    i = 0;
    while(word[i] != '\0')
    {
        i++;
    }
    return i;
}




char    *ft_strjoin(int size, char **str, char c )
{
    char *arry;
    int space;
    int total;
    int word_len;
    int p;
    int i;
    int j;
    
    i = 0;
    total = 0;
    while(i<size)
    {
        total += ft_size_of_word(str[i]);
        i++;
    }
    
    space = size -1;
    total += space + 1;

    arry = malloc(total * sizeof(char));
    if(arry == NULL) return NULL;

    i = 0;
    p = 0;
    while(i<size )
    {
        j = 0;
        word_len = ft_size_of_word(str[i]);
        while(j<word_len)
        {
       
            arry[p] = str[i][j];
            p++;
            j++;

        }
        if(i<size-1)
        {
            arry[p] = c;
            p++;
        }
        
        i++;
    
    }
    arry[p] = '\0';

    return arry;

}



int     main(void)
{
    int i;
    char *src[] = {"Hello", "World", "42"};
    char *result = ft_strjoin(3,src,' ');
    
    if(result == NULL) return 0;

    i = 0;
    while(result[i] != '\0')
    {
        ft_putchar(result[i]);
        i++;
    }

    free(result);
    return 0;


}