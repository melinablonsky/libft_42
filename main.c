/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblonsky <mblonsky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:19:30 by mblonsky          #+#    #+#             */
/*   Updated: 2023/11/23 21:29:18 by mblonsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>


int main()
{
char str[]= "-123";

printf("%d\n", ft_atoi(str));
return (0);
}


/*int	main(void)
{
	int	m;

	m = ft_isprint(12388766);
	printf ("%i\n", m);
	return (0);
}
*/

/*
int main()
{
	char s[] = "hola que tal";
	char c = ' ';
	int i;
	i = 0;

	char **result;
	
	result = ft_split( s , c);

	while(result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
	free(result);
	return (0);
}
*/
/*
int main()
{
	int n = -12345;
	int fd = 2;

	ft_putnbr_fd( n, fd);
	return(0);
}
*/

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
