#include <stdio.h>

int ft_toupper (int c)
{
    if (c >= 'a' && c<= 'z')
    {
        c = (c - 32);
    }
    return (c);
}

int main(void)
{
    int upperc;

    upperc = ft_toupper('9');
    printf("%c\n", upperc);
    return(0);
}