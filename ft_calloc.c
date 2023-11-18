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




/*
int main()
{
	size_t num_elements = 5;
	size_t element_size = sizeof(int);

	//calloc
	int *number_calloc = (int *)calloc(num_elements, element_size);
	if(number_calloc == NULL)
	{
		printf("Error: calloc failed\n");
	}
	else
	{
		*number_calloc = 42;
		printf("Valor del entero (calloc): %d\n", *number_calloc);
	}
	free(number_calloc);
	
	//ft_calloc
	int *number = (int *)ft_calloc(num_elements, element_size);
	if (number == NULL)
	{
		printf("error: ft_calloc failed\n");
	}
	else
	{
		*number = 42;
		printf("valor del entero ft_calloc: %d\n", *number);
	}
	free(number);	
	
	return (0);
}
*/