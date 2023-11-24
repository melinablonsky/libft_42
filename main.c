/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblonsky <mblonsky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:19:30 by mblonsky          #+#    #+#             */
/*   Updated: 2023/11/24 15:17:36 by mblonsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

// int main()
// {
// 	char	dst[] = "hola";
// 	char	src[] = "chau";
// 	size_t n = 2;
	
// 	printf("%s\n", ft_memmove( dst, src, n));

// 	char	dst2[] = "hola";
// 	char	src2[] = "chau";
// 	size_t n2 = 2;
// 	printf("%s\n", memmove( dst2, src2, n2));
// 	return(0);
// }

// int main()
// {
// 	char	b [] = "hola";
// 	int	c = 'a';
// 	size_t len = 2;
// 	ft_memset(b, c, len);
// 	printf("b = %s\n", b);
// }


// int main()
// {
// 	char s[] = "hola";
// 	size_t n = 2;
	
// 	printf("v original mine = %s\n", s);
// 	ft_bzero(s, n);
// 	printf("new mine = %s\n", s);
	
// 	char s2[] = "hola";
// 	size_t nn = 2;
// 	printf("v original lib = %s\n", s2);
// 	bzero(s2, nn);
// 	printf("new lib = %s\n", s2);
// }
/*
int	main()
{	
	char s[] = "hola como estas hola";
	char set[] = "hola";
	
	printf("%s\n", ft_strtrim(s, set));
	return(0);
}
*/


// int	main()
// {	
// 	const char s[] = "hola";
// 	int c;
	
// 	printf("%s\n", ft_strrchr(NULL, 2));
// 	printf("%s\n", strrchr(NULL, 2));
// 	return(0);
// }



// int	main()
// {	
// 	char dst[] = "";
// 	char src[] = "bye";
// 	size_t dstsize = 2;
	
// 	printf("%zu\n", ft_strlcpy(dst, NULL, dstsize));
// 	printf("%zu\n", strlcpy(dst, NULL, dstsize));
// 	return(0);
// }


/*
int	main()
{
	char s[]="hola";
	int fd = -1;
	
	ft_putstr_fd(s, fd);
	return(0);
}
*/
/*
int main()
{
char str[]= "-123";

printf("%d\n", ft_atoi(str));
return (0);
}
*/

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

// int	main(void)
// {
// 	// char	dst[0] = "";
// 	// char	src [] = "si";
// 	// char	dst2[0] = "";
// 	// char	src2 [] = "si";
	
// 	// ft_memcpy( dst, NULL, 5);
// 	// printf("%s\n", dst);
// 	// memcpy( dst2, NULL, 5);
// 	// printf("%s\n", dst2);
	
// 	char dest[100];
// 	memset(dest, 'A', 100);
// 	ft_memcpy(dest, "coucou", 0);
// 	char dest2[100];
// 	memset(dest2, 'A', 100);
// 	memcpy(dest2, "coucou", 0);
// 	printf("- > %s \n", dest);
// 	printf("- > %s \n", dest2);
// 	char *rtn = (char *)ft_memcpy(dest, NULL, 0);
// 	char *rtn2 = (char *)memcpy(dest2, NULL, 0);
// 	printf("-----> %s \n", rtn);
// 	printf("-----> %s \n", rtn2);
	
// 	return (0);
// }


/*
int	main(void)
{
	char	s[] = "si no";
	char	c = ' ';

	printf("direccion de memoria = %p\n", ft_split(s, c));
}
*/

int main(void)
{
	// char str1[50];
	// char str2[50] = "mahmudul hasan";
	// char *ret;

	// ret = ft_memmove(str1, str2, 5);
	// printf("%s", ret);



	char *prueba;
char *prueba2;
	prueba = calloc(sizeof(char), 2 + 1);
	prueba2 = ft_calloc(sizeof(char), 2 + 1);

	printf("%p\n", prueba);
	printf("%p\n", prueba2);
	printf("%d - %d\n", prueba[0], prueba[1]);
	
	return (0);
}