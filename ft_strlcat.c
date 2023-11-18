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

	j = 0;
	while (dst[j] != '\0')
	{
		j++;
	}

	i = 0;
	while (i < dstsize -1 && src[i] !='\0')
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
	return j;
}

/*
int main()
{
	char dst[] = "hola";
	char src[] = "chauuuu";

	size_t result = ft_strlcat(dst, src, 5);
	printf("q = %zu\n", result);
	printf("ft_strlcat = %s\n", dst);

	strlcat(dst, src, 5);
	printf("strlcat = %s\n",dst);
	return (0);
}
*/