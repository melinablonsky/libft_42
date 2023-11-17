#include <stdio.h>

int ft_tolower (int c)
{
    if (c >= 'A' && c<= 'Z')
    {
        c = (c + 32);
    }
    return (c);
}

int main(void)
{
    int lowerc;

    lowerc = ft_tolower('A');
    printf("%c\n", lowerc);
    return(0);
}