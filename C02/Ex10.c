//Co2Ex010:
#include <unistd.h>

int     ft_strlcpy(char *dest, char *src, int size)
{
    int src_len = 0;
    int n = 0;
    while(src[src_len]  != '\0')
    {
        src_len++;
    }
    
    if(size > 0)
    {
        while(n < size-1 && src[n] != '\0')
        {
            dest[n] = src[n];
            n++;
        }
        dest[n] = '\0';
    }

 
    return src_len;
}

int main(void)
{
    char dest[10];
    int i = 0;
    ft_strlcpy(dest, "Hello, word", 10);
    while(dest[i] != '\0')
    {
        write(1, &dest[i], 1);
        i++;
    }
    write(1, "\n", 1);
    return 0;
}