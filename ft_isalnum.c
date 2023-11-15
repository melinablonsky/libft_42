/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblonsky <mblonsky@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:45:15 by mblonsky          #+#    #+#             */
/*   Updated: 2023/09/20 11:02:40 by mblonsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_isalnum(int c)
{
	return (isalpha(c) || isdigit(c));
}

int	main(void)
{
	int	m;

	m = ft_isalnum('A');
	printf ("%i\n", m);
	return (0);
}
