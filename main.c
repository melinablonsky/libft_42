#include "libft.h"

/*
//ft_split.c
int main()
{
	char	*string = "hola que tal";
	int	c = ' ';

	char	**result = ft_split(string, c);
	(void)result;
    

}

//ft_substr.c
int main()
{
	char s[] = "hello";
	int start = 3;
	char *result;

	result = ft_substr(s, start, 2);
	printf(" = %s\n", result);
	return (0);
}


//ft_putchar_fd
int main()
{
    char c = 'A';
    int fd = 2;
    ft_putchar_fd(c, fd);
	return (0);
}

//ft_putstr_fd
int main()
{
	char s[]="Hello";
	int fd = 1;
	ft_putstr_fd(s, fd);
	return (0);
}

//ft_putendl_fd
int main()
{
	char s[]="hello";
	int fd = 1;
	ft_putendl_fd(s, fd);
	return(0);
}

//ft_putnbr_fd
int main()
{
	int n = -2147483648;
	int fd = 2;

	ft_putnbr_fd(n, fd);
	return(0);
}

//ft_striteri (no funciona)
int main()
{
	char s[]="hola";

	ft_striteri(s, &printf);
	return (0);
}


//ft_strdup
int main()
{
	char s2[] = "hello world";
	char *result = ft_strdup(s2);
	printf("%s\n", result);
	return (0);
}

//ft_strjoin
int main()
{
	char *result;

	result = ft_strjoin("porfavor", "funciona");
	printf("%s\n", result);
	return(0);
}

//ft_strtrim
int main()
{
	char *result;

	result = ft_strtrim("@por@favor@@@", "@");
	printf("%s\n", result);
	return(0);
}
*/

int main()
{
	int n = -2147483648;

	char *result;
	
	result = ft_itoa(n);
	printf("%s\n", result);
	return (0);
}