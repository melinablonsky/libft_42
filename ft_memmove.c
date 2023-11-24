/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblonsky <mblonsky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 20:27:48 by mblonsky          #+#    #+#             */
/*   Updated: 2023/11/24 15:10:44 by mblonsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	aux_reverse_asign(int len, char *ptr_dst, const char *ptr_src)
{
	while (len > 0)
	{
		ptr_dst[len - 1] = ptr_src[len -1];
		len--;
	}
}

static void	aux_asign(int len, char *ptr_dst, const char *ptr_src)
{
	int	i;

	i = 0;
	while (i < len)
	{
		ptr_dst[i] = ptr_src[i];
		i++;
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
	ptr_src = (char *)src;
	i = 0;
	if (ptr_dst > ptr_src)
	{
		aux_reverse_asign(len, ptr_dst, ptr_src);
	}
	else
	{
		aux_asign(len, ptr_dst, ptr_src);
	}
	return (dst);
}
