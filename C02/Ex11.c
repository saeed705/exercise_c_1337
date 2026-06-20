//C02Ex11;
#include <unistd.h>

void    ft_putchar(char c)
{
    
    write(1,&c,1);
    
}


void    ft_putstr_non_printtable(char *str)
{
    int i;
    char *base = "0123456789abcdef";

    i = 0;
    while(str[i])
    {
        if(str[i]>= 32 && str[i]<= 126)
        {
            ft_putchar(str[i]);
        }
        else{
            ft_putchar('\\');
            ft_putchar(base[str[i]/16]);
            ft_putchar(base[str[i]%16]);
        }
        i++;
    }


}

int     main(void)
{
    ft_putstr_non_printtable("Hello\tWorld");
    ft_putchar('\n');
    ft_putstr_non_printtable("mohamed\nsaid");
    ft_putchar('\n');
    ft_putstr_non_printtable("Hello\0 emran");

    return 0;
}

