/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblonsky <mblonsky@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 15:26:16 by mblonsky          #+#    #+#             */
/*   Updated: 2023/10/29 19:10:18 by mblonsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;

	size_t	len_dst;
	size_t	len_src;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);

	j = 0;
	while (dst[j] != '\0')
	{
		j++;
	}
	if(j >= dstsize)
	{
		return (j);
	}
	i = 0;
	while (j < dstsize -1 && src[i] !='\0')
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	while (src[i] != '\0')
	{
		i++;
	}
	return (len_dst + len_src);
}