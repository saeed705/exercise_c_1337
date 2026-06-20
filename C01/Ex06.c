//C01Ex06:
#include <unistd.h>


int     ft_strlen(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return i;
}

int     main(void)
{
    int lenght = ft_strlen("hello");
    char c = '0' + lenght;
    write(1,&c,1);
    return 0;
}