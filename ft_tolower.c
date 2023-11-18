/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblonsky <mblonsky@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 20:35:07 by mblonsky          #+#    #+#             */
/*   Updated: 2023/11/18 20:35:10 by mblonsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_tolower (int c)
{
    if (c >= 'A' && c<= 'Z')
    {
        c = (c + 32);
    }
    return (c);
}

/*
int main(void)
{
    int lowerc;

    lowerc = ft_tolower('A');
    printf("%c\n", lowerc);
    return(0);
}
*/
