//C03Ex04:
#include <unistd.h>


char    *ft_strstr(char *haystack, char *needle)
{
     int i = 0;
     

     if(*needle == 0)
     {
        return &haystack[0];
     }

     while(haystack[i])
     {
        int j = 0;
        while(needle[j] != '\0')
        {
            if(needle[j] != haystack[i+j])
            break;
            j++;
            
        }
        if(needle[j] == '\0')
        {
            return &haystack[i];
        }
        i++;     
     }
     return 0;
     
     
}


int main(void)
{
    char haystack[] = "Hello Word";
    char haystack2[] = "Welcome in the school";
    

   char *n =  ft_strstr(haystack, ""); // return first character from haystack
   char *y = ft_strstr(haystack2, "school"); //retun first character from word!!
   write(1,n,1);
   write(1,"\n",1);
   write(1, y, 1);
   return 0;
}