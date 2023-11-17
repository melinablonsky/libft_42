/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblonsky <mblonsky@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:00:34 by mblonsky          #+#    #+#             */
/*   Updated: 2023/11/16 11:56:59 by mblonsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{   
    size_t len;

    len = ft_strlen(s1) + 1; // para incluir el caracter nulo.

    char *dup;

    dup = (char *)malloc(len); //con malloc asigno "len" espacio de memoria (tamaño de s1 + 1). Malloc devuelve un puntero a ese espacio de memoria, pero es de tipo void, entonces lo casteamos a char.
    if (dup != NULL)
    {
        // strlcpy(dup, s1, len);
        // printf("ft = %s\n", dup);
        return(dup);
    }
    return NULL;        //esto lo he añadido para probar cosas. revisar
}

// int main ()
// {
//     char *s2;

//     s2 = "hello";

//     ft_strdup(s2);
//     return (0);
// }