//C06Ex03
#include <unistd.h>

void    ft_putstr(char *s)
{
    while(*s)
    {
        write(1,s++,1);
    }
    write(1,"\n",1);

}

void    ft_swap(char **x , char **y)
{
    char *temp = *x;
    *x = *y;
    *y = temp;
}


int     ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while(s1[i] != '\0' && s2[i] != '\0'  && s1[i] == s2[i])
    {
        i++;
    }
    return s1[i] - s2[i];
}


int     main(int argc, char **argv)
{
    int i,j;
    i = 1;
    while(i <= argc -1)
    {
        j =  i +1;
        while(j<= argc -1)
        {
            if(ft_strcmp(argv[i], argv[j]) > 0)
            {
                ft_swap(&argv[i], &argv[j]);
            }
                
            j++;
        }
        i++;
    }

    i = 1;
    while(i<= argc -1)
    {
        ft_putstr(argv[i]);
        i++;
    }
        
    
    return 0;
}