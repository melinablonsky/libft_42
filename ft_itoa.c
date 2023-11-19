/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblonsky <mblonsky@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:58:27 by mblonsky          #+#    #+#             */
/*   Updated: 2023/11/19 15:58:33 by mblonsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int count_characters(int number)
{
    long nbr_cc;
    int count;

    nbr_cc = number;
    count = 1;
    if(nbr_cc < 0)
    {
        count++;
        nbr_cc = -nbr_cc;
    }
    while(nbr_cc >= 10)
    {
        count++;
        nbr_cc = nbr_cc / 10;
    }
    return (count);
}


static void send_characters(char *str, int number, int size)
{
    long    nbr_fs;
    int is_negative;
    
    nbr_fs = number;
    if (nbr_fs < 0)
    {
        is_negative = 1;
        nbr_fs = -nbr_fs;
    }
    else
    {
        is_negative = 0;
    }
    while (size > is_negative)
    {
        size--;
        str[size] = nbr_fs % 10 + '0';
        nbr_fs = nbr_fs / 10;
    }
    if (is_negative)
    {
        str[0] = '-'; //PUEDO AGREGARSELO DESPUES DE HABER MANDADO DE ATRAS PARA ADELANTE LOS DEMAS DIGITOS?! (FUNCIONA PERO NO ENTIENDO)
    }
}

char *ft_itoa(int n)
{
    int size;
    char    *ptr_str;

    size = count_characters(n);
    ptr_str = ft_calloc((size +1), sizeof(char));
    if(!ptr_str)
    {
        return(NULL);
    }
    send_characters( ptr_str, n, size);
    return(ptr_str);
}