//C02Ex09:
#include <unistd.h>


int ft_is_alphanumeric(char c)
{
  
    if(!(c>= 'a' && c<= 'z' || c>= 'A' && c<= 'Z' || c >= '0' && c<= '9'))
    {
        return 0;
    }
    return 1;
}

char  *ft_strcapitalize(char *src)
{
    int  i = 0;
    int new_word = 1;
  while(src[i] != '\0')
  {
     if(ft_is_alphanumeric(src[i]) == 1)
    {
        if(new_word == 1 && !(src[i] >= '0' && src[i]<= '9'))
        {
            src[i] -= 32;
            new_word = 0;
        }
        else if(src[i] >= 'A' && src[i]<= 'Z')
        {
            src[i] += 32;
        }
            
    }
    else{
        new_word = 1;
    }
    i++; 
  }
   
    return src;

}

int main(void)
{
    char word[] = "hello, welcome in 1337 programming school!";
    int i = 0;


    ft_strcapitalize(word);
    while(word[i] != '\0')
    {
        write(1, &word[i], 1);
        i++;
    }

    return 0;
}
