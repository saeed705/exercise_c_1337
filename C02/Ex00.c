//C02Ex00:
#include <unistd.h>

char *ft_strcpy(char *dest, char *src) 
{
  int i = 0;

  while(src[i] != '\0')
  {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';

  return dest;
}

int main(void)
{
    char src[] = "Hello";
    char dest[10];
    int i = 0;

    ft_strcpy(dest, src);
    
    while(dest[i] != '\0')
    {
        write(1,&dest[i], 1);
        i++;
    }
    write(1, "\n", 1);
    return 0;
}