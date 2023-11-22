#include "libft.h"
#include <string.h>


int main()
{
	// char s[] = "teste";
	// int c = 'e';

	// char *prueba = ft_strchr(s, 0);
	// char *prueba2 = ft_strrchr(s, 0);
	// printf("%p - %s\n", prueba, prueba);
	// printf("%p - %s\n", prueba2, prueba2);

	char str[] = "teste";
	int str2 = 1024;
	char str3[] = "teste";
	int str4 = 1024;

	printf("1 - %s - %p-\n", strchr(str, str2), strchr(str, str2));
	printf("2 - %s - %p-\n", ft_strchr(str3, str4), ft_strchr(str3, str4));

	return(0);
}


// int main()
// {
// 	char s[]= "lorem ipsum dolor sit amet, consectetur adipiscing";
	
// 	printf("%s\n", ft_substr(s, 7, 10));
// 	return(0);
// }

//ft_isalpha
// int main()
// {
// 	int c;
// 	c = ' ';
// 	printf("%d\n", ft_isalpha(c));
// 	return (0);
// }

/*
ISALPHA
int	main(void)
{
	int	m;

	m = ft_isalpha('A');
	printf ("%i\n", m);
	return (0);
}
*/


/*
ATOI
int main()
{
	const char *string1 = "   123";
	const char *string2 = "   -456";
	const char *string3 = "   +789";
	const char *string4 = "   abc123";

	printf("123 = %d\n", ft_atoi(string1));
	printf("-456 = %d\n", ft_atoi(string2));
	printf("789 = %d\n", ft_atoi(string3));
	printf("0  = %d\n", ft_atoi(string4));
	return 0;
}
*/

/*
BZERO
int main()
{
	char	 string[5];

	ft_bzero(string, 4);
	printf("string = %s\n", string);
}
*/







// //ft_split.c
// int main()
// {
// 	char	*string = "hola que tal";
// 	int	c = ' ';

// 	char	**result = ft_split(string, c);
// 	(void)result;
    

// }

// //ft_substr.c
// int main()
// {
// 	char s[] = "hello";
// 	int start = 3;
// 	char *result;

// 	result = ft_substr(s, start, 2);
// 	printf(" = %s\n", result);
// 	return (0);
// }


// //ft_putchar_fd
// int main()
// {
//     char c = 'A';
//     int fd = 2;
//     ft_putchar_fd(c, fd);
// 	return (0);
// }

// //ft_putstr_fd
// int main()
// {
// 	char s[]="Hello";
// 	int fd = 1;
// 	ft_putstr_fd(s, fd);
// 	return (0);
// }

// //ft_putendl_fd
// int main()
// {
// 	char s[]="hello";
// 	int fd = 1;
// 	ft_putendl_fd(s, fd);
// 	return(0);
// }

// //ft_putnbr_fd
// int main()
// {
// 	int n = -2147483648;
// 	int fd = 2;

// 	ft_putnbr_fd(n, fd);
// 	return(0);
// }

// //ft_strdup
// int main()
// {
// 	char s2[] = "hello world";
// 	char *result = ft_strdup(s2);
// 	printf("%s\n", result);
// 	return (0);
// }

// //ft_strjoin
// int main()
// {
// 	char *result;

// 	result = ft_strjoin("porfavor", "funciona");
// 	printf("%s\n", result);
// 	return(0);
// }

// //ft_strtrim
// int main()
// {
// 	char *result;

// 	result = ft_strtrim("@por@favor@@@", "@");
// 	printf("%s\n", result);
// 	return(0);
// }

// //ft_itoa
// int main()
// {
// 	int n = -2147483648;

// 	char *result;
	
// 	result = ft_itoa(n);
// 	printf("%s\n", result);
// 	return (0);
// }

// //ft_striteri (no funciona)
// int main()
// {
// 	char s[]="hola";
// 	char *result = ft_striteri(s, &printf);
// 	printf("%s\n", result);
// 	return (0);
// }

// //ft_strmapi
// char function_mapi(unsigned int i, char c)
// {
// 	//printf("%c", c);
// 	return(c);
// }
// int main()
// {
// 	char s[]="hola";
// 	char c;
// 	int i;
// 	i =0;
// 	c = s[i];

	
// 	char *result = ft_strmapi(s, function_mapi);
// 	printf("%s\n", result);
// 	return (0);
// }


// //ft_striteri

// void function_striteri(unsigned int i, char* c)
// {
// 	*c = *c+1;
// }

// int main()
// {
// 	char s[]="abcd";
// 	int i;
// 	i =0;
// 	char c;
// 	c = s[i];

	
// 	ft_striteri(s, function_striteri);
// 	printf("%s\n", s);
// 	return (0);
// }


//ft_calloc

// int main()
//{
	// char *str = (char *)ft_calloc(4 + 1, sizeof(char));
	// printf("%p\n", str);
	// str[0] = 'b';
	// str[1] = 'a';
	// // str[2] = 'a';
	// int len  = ft_strlen(str);
	// printf("%d - %d - %s\n", len, str[0], str);

	// ft_memset(str, 'z', 2);
	// printf("%s - %c\n", str, str[2]);
	// ft_memset(str, 'y', 4);
	// printf("%s - %c\n", str, str[2]);
	
//	return (0);
//}

/*
int main()
{
	char s[]="hola que tal";
	char c = ' ';

	printf("%p\n", ft_split(s, c));
	return (0);
}

*/

