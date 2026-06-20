//C02Ex06:
#include <unistd.h>

void    converte_to_char(int n)
{
    char c = '0' + n;
    write(1,&c,1);
}

int ft_str_is_printable(char *src)
{
    int  i = 0;
    while(src[i] != '\0')
    {
        if(!(src[i]>= 32 && src[i] <= 126))
        {
            return 0;
        }
        i++;
    }
    return 1;

}

int main(void)
{
    char word[] = "HELLO!";
    char mix[] = "Hello 1337";
    char non[] = "";
    char c[] = "harverd\n";
    int i = 0;

    converte_to_char(ft_str_is_printable(word));
    write(1,"\n",1);
    converte_to_char(ft_str_is_printable(mix));
    write(1,"\n",1);
    converte_to_char(ft_str_is_printable(non));
    write(1,"\n",1);
    converte_to_char(ft_str_is_printable(c));
    write(1,"\n",1);

    return 0;
}