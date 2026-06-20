//C06Ex00
#include <unistd.h>

void     ft_putstr(char *s)
{
    while(*s)
    {
        write(1, s++,1);
    }
    write(1,"\n",1);
}

int     main(int argc, char **argv)
{
    
    ft_putstr(argv[0]);

    return 0;
}