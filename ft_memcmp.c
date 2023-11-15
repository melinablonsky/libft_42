/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblonsky <mblonsky@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:29:39 by mblonsky          #+#    #+#             */
/*   Updated: 2023/10/26 12:12:09 by mblonsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	unsigned char *s1_c;
	unsigned char *s2_c;

	i = 0;
	s1_c = (unsigned char*)s1;
	s2_c = (unsigned char*)s2;

	while (i < n)
	{
		if (s1_c[i] != s2_c[i])
		{
			return (s1_c[i] - s2_c[i]);
		}
		i++;
	}
	return 0;
}

/*
int main (void)
{
	const void *s1_c = "abc";
	const void *s2_c = "123";
	unsigned int n = 3;
	int result = ft_memcmp(s1_c, s2_c, n);
	printf("48 = %d\n", result);

	result = ft_memcmp("ab", "ac", 2);
	printf("menor = %d\n", result);
}
*/