/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblonsky <mblonsky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 20:05:46 by mblonsky          #+#    #+#             */
/*   Updated: 2023/11/23 15:31:13 by mblonsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**aux_count_strings(char *str, char c)
{
	int		i;
	int		parts_count;
	int		checkpoint;
	char	**array;

	i = 0;
	parts_count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		checkpoint = i;
		while (str[i] && str[i] != c)
			i++;
		if (i > checkpoint)
			parts_count++;
	}
	array = ft_calloc(parts_count + 1, sizeof(char *));
	if (!array)
		return (NULL);
	return (array);
}

static int	aux_count_chars(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
	{
		i++;
	}
	return (i);
}

static void	aux_free_strings(char **parts, int j)
{
	while (j--)
	{
		free(parts[j]);
	}
	free(parts);
}

static char	**aux_complete_strings(char **parts, char *str, char c)
{
	int	i;
	int	j;
	int	valid_char_count;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		valid_char_count = aux_count_chars(&str[i], c);
		if (valid_char_count > 0)
		{
			parts[j] = ft_substr(str, i, valid_char_count);
			if (!parts[j])
			{
				aux_free_strings(parts, j);
				return (NULL);
			}
			j++;
		}
		while (str[i] && str[i] != c)
			i++;
	}
	return (parts);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	char	*str;

	str = (char *)s;
	if (!str)
	{
		return (NULL);
	}
	array = aux_count_strings(str, c);
	if (!array)
	{
		return (NULL);
	}
	array = aux_complete_strings(array, str, c);
	return (array);
}
