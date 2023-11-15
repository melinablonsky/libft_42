/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblonsky <mblonsky@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:52:34 by mblonsky          #+#    #+#             */
/*   Updated: 2023/10/23 14:24:32 by mblonsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	if (needle[j] == '\0')
	{
		return (char *)haystack;
	}
	while (haystack[i] != '\0')
	{
		while (haystack[i + j] == needle[j] && haystack[i + j] != '\0' && j < len)
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return (char *)(haystack + i);
		}
		i++;
		j = 0;
	}
	return NULL;
}

int main(void)
{
	char	main_str[]="Foo Bar Baz";
	char	second_str[] = "Bar";
	size_t slen = 2;
	printf("%s", ft_strnstr(main_str, second_str, slen));
}

