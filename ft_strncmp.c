/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblonsky <mblonsky@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:53:49 by mblonsky          #+#    #+#             */
/*   Updated: 2023/10/19 16:13:13 by mblonsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	unsigned char	*s1_c;
	unsigned char	*s2_c;

	i = 0;
	s1_c = (unsigned char*)s1;
	s2_c = (unsigned char*)s2;
	while (i<n && (s1_c[i] || s2_c[i]))
	{
		if (s1_c[i] != s2_c[i])
		{
			return (s1_c[i] - s2_c[i]);
		}
		i++;
	}
	return (0);	
}

/*
int	main (void)
{
	char	*s1_c = "abc";
	char	*s2_c = "abc";
	unsigned int	n = 3;
	int	result = ft_strncmp(s1_c, s2_c, n);
	printf("0 = %d\n", result);

	result = ft_strncmp("abc","abc", 2);
	printf("0 = %d\n", result);

	result = ft_strncmp("ab","ac", 2);
	printf("<1 = %d\n", result);

	result = ft_strncmp("bc","ac", 2);
	printf("1 = %d\n", result);

	result = ft_strncmp("abc","ab", 3);
	printf(">1 = %d\n", result);

	result = ft_strncmp("ab","abc", 3);
	printf("<1 = %d\n", result);

	result = ft_strncmp("ab","abc", 2);
	printf("0 = %d\n", result);

	result = ft_strncmp("abc","ab", 2);
	printf("0 = %d\n", result);

	result = ft_strncmp("","a", 1);
	printf("%d\n", result);

}
*/