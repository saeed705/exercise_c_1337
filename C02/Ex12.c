//C02Ex12
#include <unistd.h>

void    ft_putchar(char c)
{
 
    write(1,&c,1);
}


void    convert_to_hex( unsigned char c)
{
    char *base;
    char high;
    char low;

    base = "0123456789abcdef";
    high = base[c/16];
    low = base[c%16];
    ft_putchar(high);
    ft_putchar(low);
}

void    putaddr(unsigned long long  addr)
{
    int i;
    int byte;
    char *base = "0123456789abcdef";
    i = 16;
    while(i>0)
    {
        i--;
        byte = (addr >> (i*4)) & 0xf;
        ft_putchar(base[byte]);
        
    }
    
}


void    ft_print_memory( void *addr,  unsigned int size)
{
    unsigned i;
    unsigned char *ptr;
    int j;

    ptr = (unsigned char *) addr;

    i = 0;
    while(i<size)
    {
        putaddr((unsigned long long)(ptr+i));
        ft_putchar(':');

        j = 0;
        while(j<16)
        {
            if(i+j <size)
            {
                if(j%2==0)
                {
                    ft_putchar(' ');
                }
                convert_to_hex(ptr[i+j]);
            }
            else{
                ft_putchar(' ');
                ft_putchar(' ');
            }
            j++;
        } 
        j =0;
        while(j<16 && i+j <size)
        {
            if(ptr[i+j]>= 32 && ptr[i+j]<= 126)
            {
                ft_putchar(ptr[i+j]);
            }
            else{
                ft_putchar('.');
            }
            j++;  
        }
        
        ft_putchar('\n');
        i+=16;
        
    }

}


int     main(void)
{
    char str[] = "Hello";
    int len;

    len = 0;
    while(str[len])
    {
        len++;
    }


    ft_print_memory(str,len);
}