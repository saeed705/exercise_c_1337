//C02Ex05:
#include <unistd.h>

void    converte_to_char(int n)
{
    char c = '0' + n;
    write(1,&c,1);
}

int ft_str_is_uppercase(char *src)
{
    int  i = 0;
    while(src[i] != '\0')
    {
        if(!(src[i] >= 'A' && src[i] <= 'Z'))
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int main(void)
{
    char word[] = "HELLO";
    char mix[] = "Hello 1337";
    char non[] = "";
    int i = 0;

    converte_to_char(ft_str_is_uppercase(word));
    write(1,"\n",1);
    converte_to_char(ft_str_is_uppercase(mix));
    write(1,"\n",1);
    converte_to_char(ft_str_is_uppercase(non));
    write(1,"\n",1);

    return 0;
}