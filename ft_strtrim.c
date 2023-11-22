/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblonsky <mblonsky@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 14:02:45 by mblonsky          #+#    #+#             */
/*   Updated: 2023/11/19 14:02:50 by mblonsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char *ptr_trim;
	int i;
	int i_start_trim;
	int i_end_trim;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
	{
		i++;
	}
	i_start_trim = i;

	i = ft_strlen(s1) - 1;
	while (i >= i_start_trim && ft_strchr(set, s1[i]))
	{
		i--;
	}
	i_end_trim = i;

	ptr_trim = ft_calloc(i_end_trim - i_start_trim + 2, sizeof(char));
	if(!ptr_trim)
	{
		return (NULL);
	}
	
	i = i_start_trim;
	while (i <= i_end_trim)
	{
		ptr_trim[i - i_start_trim] = s1[i];
		i++;
	}
	return(ptr_trim);
}
