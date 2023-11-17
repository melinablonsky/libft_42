#include<stdio.h>
#include<libc.h>

char *ft_strdup(const char *s1)
{   
    size_t len;

    len = ft_strlen(s1) + 1; // para incluir el caracter nulo.

    char *dup;

    dup = (char *)malloc(len); //con malloc asigno "len" espacio de memoria (tamaño de s1 + 1). Malloc devuelve un puntero a ese espacio de memoria, pero es de tipo void, entonces lo casteamos a char.
    if (dup != NULL)
    {
        strlcpy(dup, s1, len);
        printf("ft = %s\n", dup);
        return(dup);
    }
}

int main ()
{
    char *s2;

    s2 = "hello";

    ft_strdup(s2);
    return (0);
}