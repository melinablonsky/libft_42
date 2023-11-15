/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblonsky <mblonsky@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:10:26 by mblonsky          #+#    #+#             */
/*   Updated: 2023/09/20 11:19:25 by mblonsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 126)
		return (1);
	return (0);
}


/*
int	main(void)
{
	int	m;

	m = ft_isascii(128);
	printf ("%i\n", m);
	return (0);
}
*/