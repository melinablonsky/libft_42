/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblonsky <mblonsky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:47:52 by mblonsky          #+#    #+#             */
/*   Updated: 2023/11/23 17:49:56 by mblonsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	h;
	unsigned int	d;
	size_t			len_needle;
	size_t			len_haystack;

	h = 0;
	if (!haystack)
		return (NULL);
	len_needle = ft_strlen(needle);
	len_haystack = ft_strlen(haystack);
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[h] != '\0' && h < len && len_haystack >= len_needle)
	{
		d = 0;
		while (haystack[h + d] == needle[d] && haystack[h + d] != '\0'
			&& (h + d) < len)
			d++;
		if (h + d > len)
			return (NULL);
		if (needle[d] == '\0')
			return ((char *)(haystack + h));
		h++;
	}
	return (NULL);
}
