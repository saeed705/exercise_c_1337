//C02Ex03:
#include <unistd.h>

void    converte_to_char(int n)
{
    char c = '0' + n;
    write(1,&c,1);
}

int ft_str_is_numeris(char *src)
{
    int i = 0;

    while(src[i] != '\0')
    {
        if(!(src[i] >= '0' && src[i] <= '9'))
        {
            return 0;
        }
        i++;
    }

    return 1;
}

int main(void)
{
    char non[] = "";
    char num[] = "1238";//1
    char mix[] = "1hfh";//0

     converte_to_char(ft_str_is_numeris(num));
    write(1,"\n", 1);

    return 0;
}