//C02Ex04:
#include <unistd.h>

void    converte_to_char(int n)
{
    char c = '0' + n;
    write(1,&c,1);
}

int ft_str_is_lowercase(char *src)
{
    int  i = 0;
    while(src[i] != '\0')
    {
        if(!(src[i] >= 'a' && src[i] <= 'z'))
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int main(void)
{
    char word[] = "hello";//1
    char mix[] = "Hello 1337";
    char non[] = "";
    int i = 0;

    converte_to_char(ft_str_is_lowercase(word));
    write(1,"\n",1);
    converte_to_char(ft_str_is_lowercase(mix));
    write(1,"\n",1);
    converte_to_char(ft_str_is_lowercase(non));
    write(1,"\n",1);

    return 0;
}