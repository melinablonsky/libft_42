/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblonsky <mblonsky@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 20:28:17 by mblonsky          #+#    #+#             */
/*   Updated: 2023/11/18 20:28:20 by mblonsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    char	*ptr_b;
    size_t i;

    ptr_b = b; // no hace falta castear b a (void char *)
    i = 0;

    while (i < len)
    {
		ptr_b[i] = c;
        i++;
    }
    return(b);
}


/*
int main()
{
	char *p;
    p = malloc(2);//resevo 5 espacios de memoria para este puntero.

    memset(p, 0, 2);//inicializo la funcion real con ceros.

    ft_memset(p, 7, 3);
    printf("ft_memset = %d\n", p[0]);
    printf("ft_memset = %d\n", p[1]);
    printf("ft_memset = %d\n", p[2]);
    printf("ft_memset = %d\n", p[3]);
    printf("ft_memset = %d\n", p[4]);

    char *p2;
    p2 = malloc(2);
    
    p2 = memset(p2, 0, 2);


    p2 = memset(p2, 7, 3);
    printf("memset = %d\n", p2[0]);
    printf("memset = %d\n", p2[1]);
    printf("memset = %d\n", p2[2]);
    printf("memset = %d\n", p2[3]);
    printf("memset = %d\n", p2[4]);

    return (0);
}
*/
