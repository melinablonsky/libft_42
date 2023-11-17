/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblonsky <mblonsky@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 20:05:46 by mblonsky          #+#    #+#             */
/*   Updated: 2023/11/16 11:52:50 by mblonsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// #include<stdlib.h>
// #include<stdio.h>
#include "libft.h"

char **ft_split(char const *s, char c)
{
	size_t	i;
	char *ptr_copy;
	char *ptr_array;

	i=0;
	ptr_copy = (char*)s;
	while (ptr_copy != '\0')
	{
		ptr_copy = ft_strchr(ptr_copy, c);
		i++;
		if (ptr_copy != NULL)
		{
			ptr_copy++;
		}
	}
	printf("%s - %s\n", s, ptr_copy);
	
	
	
	
	
	
	
	
	ptr_array = ft_calloc(sizeof (char), i + 1);
	return NULL;
}

