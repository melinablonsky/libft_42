/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblonsky <mblonsky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:43:27 by mblonsky          #+#    #+#             */
/*   Updated: 2023/11/22 18:52:22 by mblonsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *ptr_substr;
	size_t len_s;

	len_s = ft_strlen(s);
	if(start >= len_s)
	{
		return (ft_strdup(""));
	}
	if((len_s - start) < len)
	{
		len = len_s - start;
	}
	ptr_substr = (char *)ft_calloc(len + 1 , sizeof(char));
	if(ptr_substr == NULL)
	{
		return (NULL);
	}
	
	ft_strlcpy(ptr_substr,s + start, len + 1);

	return(ptr_substr);
}
