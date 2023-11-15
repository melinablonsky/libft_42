/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblonsky <mblonsky@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:20:40 by mblonsky          #+#    #+#             */
/*   Updated: 2023/09/20 11:40:01 by mblonsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >=32 && c<=126)
	   return (1);
return (0);	
}

/*
int	main(void)
{
	int	m;

	m = ft_isprint(123);
	printf ("%i\n", m);
	return (0);
}
*/
