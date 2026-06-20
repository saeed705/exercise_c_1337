//C04Ex3:
#include <stdio.h>

int     ft_atio(char *src)
{
    int i = 0;
    int sing = 1;
    int result = 0;

    
    
        while(src[i] == ' ' || src[i] == '\n' || src[i] == '\t')
        {
            i++;
        }
        if(src[i] == '-' || src[i] == '+')
        {
            if(src[i] == '-' )
            {
              sing = -1;  
            }
            i++;
        }
        
        while(src[i] >= '0' && src[i] <= '9')
        {
            result = result * 10 + (src[i] -'0');
            i++;
        }
       
    return result *sing;
}

int main(void)
{
    char *str = "2463qa";
    char word[] = " 758";
    char *strnum = "-749";

    int num  = ft_atio(str);
    int num2 = ft_atio(word);
    int num3 = ft_atio(strnum);
    printf("%d\n", num);
    printf("%d\n", num2);
    printf("%d\n", num3);
    return 0;

}

