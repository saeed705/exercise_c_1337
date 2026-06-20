//C03Ex02:
#include <unistd.h>

char  *ft_strcat(char *dest, char *word)
{
    int i = 0;
    int n = 0;
    while(dest[i] != '\0')
    {
        i++;
    }
    while(word[n] != '\0')
    {
        dest[i] = word[n];
        i++;
        n++;
    }
    dest[i] = '\0';

    return dest;


}

int main(void)
{
    char dest[20] = "Hello";
    int i = 0;

    ft_strcat(dest, " World");

    while(dest[i]  != '\0')
    {
        write(1,&dest[i], 1);
        i++;
    }
    write(1,"\n",1);
    return 0;
}