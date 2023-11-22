/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblonsky <mblonsky@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:10:58 by mblonsky          #+#    #+#             */
/*   Updated: 2023/11/20 12:11:02 by mblonsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int i;
	char *ptr_mapi;
	int mapi_len;

	if (!s || !f)
	{
		return (NULL);
	}

	mapi_len = ft_strlen(s);
	ptr_mapi = ft_calloc(mapi_len + 1, sizeof(char));
	if (!ptr_mapi)
	{
		return (NULL);
	}

	i = 0;
	while (i < mapi_len)
	{
		ptr_mapi[i] = f(i, s[i]);
		i++;
	}
	return (ptr_mapi);
}