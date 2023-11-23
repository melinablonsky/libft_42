/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblonsky <mblonsky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 20:27:48 by mblonsky          #+#    #+#             */
/*   Updated: 2023/11/23 17:54:18 by mblonsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	funct_bucle1(int len, char *ptr_dst, const char *ptr_src)
{
	while (len > 0)
	{
		ptr_dst[len - 1] = ptr_src[len -1];
		len--;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*ptr_dst;
	const char	*ptr_src;
	size_t		i;

	if (!dst || !src)
		return (NULL);
	ptr_dst = (char *)dst;
	ptr_src = src;
	i = 0;
	if (ptr_dst > ptr_src)
	{
		funct_bucle1(len, ptr_dst, ptr_src);
	}
	else
	{
		while (i < len)
		{
			ptr_dst[i] = ptr_src[i];
			i++;
		}
	}
	return (dst);
}
