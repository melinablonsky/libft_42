/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblonsky <mblonsky@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 14:02:45 by mblonsky          #+#    #+#             */
/*   Updated: 2023/11/19 14:02:50 by mblonsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set) // set puede tener mas de un caracter?
{
    char *ptr_trim;
    int i;
    int i_start_trim;
    int i_end_trim;

    i = 0;
    while (s1[i] && ft_strchr(set, s1[i])) // mientras existen.... ft_strchr (set = puntero a la string, s1[i] = el char/int buscado). Mientras s1[i], a medida que avanza, siga siendo el caracter a quitar, que avance (mientras el carácter actual de s1 esté presente en la cadena set.)
    {
        i++;
    }
    i_start_trim = i;

    i = ft_strlen(s1) - 1; // llevo la i al final de la cadena s1, -1 porque el string empieza en cero.
    while (i >= i_start_trim && ft_strchr(set, s1[i])) // (en mi ej, "mientras i= 13 >= i_start_trim = 1". Retrocede desde el último carácter hacia el principio hasta encontrar un carácter que no esté presente en set.
    {
        i--;
    }
    i_end_trim = i;

    ptr_trim = ft_calloc(i_end_trim - i_start_trim + 2, sizeof(char)); // POR QUE EL NULO SON 2 CHARS?
    if(!ptr_trim)
    {
        return (NULL);
    }

    // ft_strlcpy = (ptr_trim, s1, );
    
    i = i_start_trim; // i = 1
    while (i <= i_end_trim) // 1 <= 12
    {
        ptr_trim[i - i_start_trim] = s1[i]; //en la primera iteracion da cero pero como despues solamente aumenta i. hay diferencia.
        i++;
    }
    return(ptr_trim);
}
