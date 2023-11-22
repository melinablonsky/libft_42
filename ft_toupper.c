/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblonsky <mblonsky@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 20:34:47 by mblonsky          #+#    #+#             */
/*   Updated: 2023/11/18 20:34:51 by mblonsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper (int c)
{
	if (c >= 'a' && c<= 'z')
	{
		c = (c - 32);
	}
	return (c);
}

/*int main(void)
{
	int upperc;

	upperc = ft_toupper('9');
	printf("%c\n", upperc);
	return(0);
}
*/
