//C04Ex01:
#include <unistd.h>

void    ft_putstr(char *src)
{
    int i = 0;
    while(src[i])
    {
        write(1, &src[i],1);
        i++;
    }

}

int main(void)
{
    char word[] = "Hello word!! agn";
    ft_putstr(word);
    return 0;
}