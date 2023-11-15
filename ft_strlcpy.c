/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblonsky <mblonsky@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 15:23:48 by mblonsky          #+#    #+#             */
/*   Updated: 2023/10/29 19:10:31 by mblonsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *restrict dst, const char * restrict src, size_t dstsize)
{
	size_t i;
	
	i = 0;
	while (i < dstsize -1  && src[i] !='\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	while (src[i] !='\0')
	{
		i++;
	}
	return i;
}

/*
int main()
{
	char dst[] = "hola";
	char src[] = "chau";
	
	size_t result = ft_strlcpy(dst, src, 3);
	printf("Q = %zu\n", result);
	printf("ft_strlcpy  = %s\n",dst);
	
	strlcpy(dst, src, 3);
	printf("strlcpy =  %s\n", dst);
	return (0);
}
*/