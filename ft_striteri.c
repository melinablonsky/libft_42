/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblonsky <mblonsky@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:56:53 by mblonsky          #+#    #+#             */
/*   Updated: 2023/11/18 16:56:59 by mblonsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int i;

	if (!s || !f)
	{
		return ;
	}
	i = 0;

	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}