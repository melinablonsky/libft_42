/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblonsky <mblonsky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 15:34:10 by mblonsky          #+#    #+#             */
/*   Updated: 2023/11/23 15:52:21 by mblonsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	last_occurrence;

	i = 0;
	last_occurrence = -1;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			last_occurrence = i;
		}
		i++;
	}
	if ((char)c == '\0')
	{
		return ((char *)&s[i]);
	}
	if (last_occurrence != -1)
	{
		return ((char *)&s[last_occurrence]);
	}
	return (NULL);
}
