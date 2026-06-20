//C02Ex01:
#include <unistd.h>

char *ft_strncopy(char *dest, char *src,  unsigned int n)
{
    int i = 0;
    
    while(i<n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    
    while(i < n)
    {
        dest[i] = '\0';
        i++;
    }
        
    return dest;

}

int main(void)
{
    char src[] = "Hello, World";
    char dest[20];
    int n = 15;
    int i =  0;
    ft_strncopy(dest, src, n);
    while(dest[i] != '\0')
    {
        write(1,&dest[i], 1);
        i++;
    }

    write(1, "\n",1);

    return 0;

}