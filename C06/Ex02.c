//C06Ex02
#include <unistd.h>

void    ft_putstr(char *s)
{
    while(*s)
    {
        write(1,s,1);
        s++;
    }
    write(1,"\n",1);
}

int     main(int argc, char **argv)
{
    int i = 1;

    while(argc > 1)
    {  
        ft_putstr(argv[argc-1]); 
        argc--;    
    }
   
    return 0;
}