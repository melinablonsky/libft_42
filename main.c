/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblonsky <mblonsky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:19:30 by mblonsky          #+#    #+#             */
/*   Updated: 2023/11/23 17:43:05 by mblonsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int main()
{
	int n = -12345;
	int fd = 2;
	
	// ft_putnbr_fd( n, fd);

	char dest[100];
	char dest2[100];
	memset(dest, 'A', 100);
	memset(dest2, 'A', 100);
	ft_memcpy(dest, "coucou", 0);
	memcpy(dest2, "coucou", 0);
	char *rtn = (char *)ft_memcpy(dest, NULL, 0);
char *rtn2 = (char *)memcpy(dest, NULL, 0);
	printf("%p - %s\n", rtn2, rtn2);
	printf("%p - %s\n", rtn, rtn);
	return(0);
}

/*int	main(void)
{
	char	dst[0] = "nonono";
	char	src [] = "si";
	
	ft_memcpy( dst, src, 5);
	printf("%s\n", dst);
}
*/

/*
int	main(void)
{
	char	s[] = "si no";
	char	c = ' ';

	printf("direccion de memoria = %p\n", ft_split(s, c));
}
*/
