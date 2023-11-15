/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblonsky <mblonsky@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 15:34:10 by mblonsky          #+#    #+#             */
/*   Updated: 2023/10/08 17:08:02 by mblonsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr (const char *s, int c)
{
	int i;
	int	last_occurrence;

	i = 0;
	last_occurrence = -1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			last_occurrence = i;
		}
		i++;
	}
	if (c == '\0')
	{
		return ((char *)&s[i]);
	}
	if (last_occurrence != -1)
	{
		return ((char *)&s[last_occurrence]);
	}
	return NULL;
}


/*
int	main (void)
{
	char	*string = "aall";
	int c = 'a';

	char	*result = ft_strrchr(string, c);
	printf("%s\n", result);

	result = ft_strrchr("aall", 'a');
	printf("all = %s\n", result);

	result = ft_strrchr("aaaa",'\0');
	printf("  = %s\n", result);

	result = ft_strrchr("", 'a');
	printf("NULL = %s\n", result);

	result = ft_strrchr("", '\0');
	printf(" = %s\n", result);
}
*/