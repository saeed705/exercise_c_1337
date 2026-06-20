//C03Ex05:
#include <unistd.h>

void    revers_to_char(int n)
{
    char c = '0' + (n % 10);
    write(1, &c, 1);
}

void     putnb(int num)
{
    if(num <0)
    {
        write(1, "-", 1);
        num = -num;
    }
    if(num <10)
    {
        revers_to_char(num);
    }
    else
    {
        putnb(num/10);
        revers_to_char(num);
    }
}

int  ft_strlcat(char *s1, char *s2,  int size)
{
    int i = 0;
    int n = 0;
    int j = 0;
    while(s1[i])
    {
        i++;
    }
    int len_s1 = i;
    while(s2[n])
    {
        n++;
    }


    if(size <= i)
    {
        return size + n;
    }
    else
    {
        while(i + j < size -1 && s2[j])
        {
            s1[i + j] = s2[j];
            j++;
        }
        s1[i + j] = '\0';
    }
    return i + n;



}

int main(void)
{
    char dest[10] = "Hello";
    int i = 0;

    int n = ft_strlcat(dest, " World!!!",10);
    putnb(n);

    write(1,"\n",1);
    while(dest[i] != '\0')
    {
        write(1,&dest[i],1);
        i++;
    }

    write(1,"\n",1);

    return 0;
}