/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblonsky <mblonsky@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 19:47:22 by mblonsky          #+#    #+#             */
/*   Updated: 2023/10/08 20:44:58 by mblonsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr_s;
	size_t	i;
	
	ptr_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr_s[i] = 0;
		i++;
	}
}

/*
int main()
{
	char	 string[5];

	ft_bzero(string, 4);
	printf("string = %s\n", string);
}
*/