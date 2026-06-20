//C06Ex01
#include <unistd.h>

void    ft_putstr(char *s)
{
    
    while(*s)
    {
        write(1, s++,1);
    }
    write(1,"\n",1);
}

int     main(int argc, char **argv)
{
    int i = 1;
    while(argv[i] != NULL)
    {
        ft_putstr(argv[i]);
        i++;
    }
    return 0;
   
}