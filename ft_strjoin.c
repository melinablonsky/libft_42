/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblonsky <mblonsky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:04:35 by mblonsky          #+#    #+#             */
/*   Updated: 2023/11/22 16:07:50 by mblonsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_joined; //len cadena resultante
	char	*ptr_joined; // puntero a la cadena resultante

	len_s1 = ft_strlen(s1);
	len_joined = ft_strlen(s1) + ft_strlen(s2);
	ptr_joined = (char *)ft_calloc(len_joined + 1, sizeof(char));
	if (ptr_joined == NULL)
	{
		return (NULL);
	}
	ft_strlcat(ptr_joined, s1, len_s1 + 1);
	ft_strlcat(ptr_joined, s2, len_joined + 1);
	return (ptr_joined);
}
