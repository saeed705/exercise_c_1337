#ifndef FT_H
#define FT_H

void    ft_putchar(char c);
int     ft_atio(char *src);
void    ft_putnbr(int nb);
void    ft_putstr(char *str);
char    **ft_split(char *src, char c);
int  ft_strcmp(char *src, char *cpy);
char *ft_strcpy(char *dest, char *src);
char *ft_strdup(char *str);
int     ft_strlen(char *str);
void    ft_swap(int *x, int *y);

#endif