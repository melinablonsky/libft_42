/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblonsky <mblonsky@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 19:11:26 by mblonsky          #+#    #+#             */
/*   Updated: 2023/11/01 16:09:04 by mblonsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//ft_calloc.c

void *ft_calloc(size_t count, size_t size)
{
	size_t final_size;
	void *ptr;
	
	final_size = count * size;
	ptr = malloc(final_size);
	
	if (ptr == NULL)
	{
		return NULL;
	}
	ft_bzero(ptr, final_size);
	return ptr;
}