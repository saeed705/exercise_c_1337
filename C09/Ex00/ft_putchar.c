//C00Ex00
#include "ft.h"
#include <unistd.h>

void    ft_putchar(char c)
{
        write(1, &c, 1);
}
