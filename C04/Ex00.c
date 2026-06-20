//C04Ex00:
#include <unistd.h>

int  ft_strlen(char *src)
{
    int i = 0;
    while(src[i])
    {
        i++;
    }
    return i;
}

int main(void)
{
    char c[]  = "hello";
    int i = 0;
    int j = ft_strlen(c);
    char n = '0' + j;
    write(1,&n,1);
    return 0;
}