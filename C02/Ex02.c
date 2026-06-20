//C02Ex02:
#include <unistd.h>

void    converte_to_char(int n)
{
    char c = '0' + n;
    write(1,&c, 1);
}

int  ft_str_is_alpha(char *src)
{
    int i = 0;
    
    while(src[i] != '\0')
    {
        if(!(src[i] >= 'a' && src[i] <= 'z' || src[i] >= 'A' && src[i] <= 'Z'))
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int main(void)
{
    char src[] = "he01 42"; //0
    char c[] = "hello"; //1
    char n[] = ""; //0

    converte_to_char(ft_str_is_alpha(src));
    write(1, "\n",1);
    converte_to_char(ft_str_is_alpha(c));
    write(1, "\n",1);
    converte_to_char(ft_str_is_alpha(n));
    write(1, "\n",1);

    return 0;
}