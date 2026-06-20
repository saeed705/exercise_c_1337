//C00Ex01
#include <unistd.h>

void    ft_print_alphabet(void)
{
    char c = 'a';
    // we can write it like this
    while(c <= 'z')
    {
        write(1, &c, 1);
        c++;
    }

}

int main(void)
{
    ft_print_alphabet();
    return 0;
}
