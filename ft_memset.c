/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblonsky <mblonsky@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 20:28:17 by mblonsky          #+#    #+#             */
/*   Updated: 2023/11/18 20:28:20 by mblonsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*ptr_b;
	size_t	i;

	ptr_b = b;
	i = 0;
	while (i < len)
	{
		ptr_b[i] = c;
		i++;
	}
	return (b);
}
