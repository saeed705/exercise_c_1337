//C02Ex08:
#include <unistd.h>


char  *ft_stlowercase(char *src)
{
    int  i = 0;
    while(src[i] != '\0')
    {
        if(src[i]>= 'A' && src[i] <= 'Z')
        {
            src[i] += 32;
        }
        i++;
    }
    return src;

}

int main(void)
{
    char word[] = "HELLO!";
    char mix[] = "WELCOME 1337";
    int i = 0;

    ft_struprcase(word);
    ft_struprcase(mix);
    while(word[i] != '\0')
    {
        write(1, &word[i], 1);
        i++;
    }
    i = 0;
    write(1, "\n", 1);

    while(mix[i] != '\0')
    {
        write(1, &mix[i], 1);
        i++;
    }

    return 0;
}