//C07Ex05
#include <unistd.h>
#include <stdlib.h>

void    putcht(char *w);
int     count_words(char *words, char c);
int     word_len(char *word, char c);
char    *copy_word(char *word, int len);
char    **ft_split(char *src, char c);

int main(void)
{
    
    char **result = ft_split("hello word 42", ' ');
    int i; 

    i = 0;
    while(result[i])
    {
        putcht(result[i]);
        write(1,"\n",1);
        i++;
    }
    i = 0;
    while(result[i])
    {
        free(result[i]);
        i++;
    }

    free(result);
    return 0;
}

void    putcht(char *w)
{
    int len;

    len = 0;
    while(w[len])
    {
        len++;
    }


    write(1,w,len);
}


int    word_len(char *word, char c)
{
    int len;

    len = 0;
    while(word[len] != c && word[len] != '\0')
    {
        len++;
    }

    return len;
}

int     count_words(char *words, char c)
{
    int i;
    int len;

    i = 0;
    len = 0;
    while( words[i] != '\0')
    {
        if(words[i] != c && (i == 0 || words[i-1] == c))
        {
            len++;
        }
        i++;
    }

    return len;


}

char    *copy_word(char *word, int len)
{
    char *new;
    int i;

    i = 0;
    
    new  = malloc((len +1) * sizeof(char));
    if(new == NULL) return NULL;

    while(i<len)
    {
        new[i] = word[i];
        i++;
    }
    new[i] = '\0';
    return new;

}

char    **ft_split(char *arry, char c)
{
    int i;
    int j;
    int len_words;
    int len_of_word;
    char **new;
    
    len_words = count_words(arry, c);
    

    new = malloc((len_words + 1) * sizeof(char*));
    if(new == NULL) return NULL;

    i  = 0;
    j = 0;
    while(i<len_words)
    {
        while(arry[j] == c)
        {
            j++;
        }
        len_of_word = word_len(arry + j,c);
        new[i] = copy_word(arry + j, len_of_word);
        j += len_of_word;
        i++;
    }

     new[i] = NULL;
     return new;
}

