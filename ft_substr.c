/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblonsky <mblonsky@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:43:27 by mblonsky          #+#    #+#             */
/*   Updated: 2023/11/16 11:51:05 by mblonsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *ptr_substr;
	size_t len_s;
	size_t len_sub;

	len_s = ft_strlen(s);
	if(start >= len_s)
	{
		return (ft_strdup(""));
	}
	
	len_sub = start + len;


	ptr_substr = (char *)ft_calloc(len_sub + 1, sizeof(char));
	if(ptr_substr == NULL)
	{
		return (NULL);
	}
	
	ft_strlcpy(ptr_substr,s + start, len + 1);

	return(ptr_substr);
}
