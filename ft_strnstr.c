#include <stdio.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	if (needle[j] == '\0')
	{
		return (char *)haystack;  // (no entiendo esto) esto es un puntero temporal --> si la funcion es char *ft en vez de const char *ft, da un error porque la funcion esta declarada para devolver un puntero char pero esta intentando devolver un puntero const char. por eso se usa un puntero temporal. no entiendo esto.
	}
	while (haystack[i] != '\0')
	{
		while (haystack[i + j] == needle[j] && haystack[i + j] != '\0' && j < len)
		{
			j++;
		}
		if (needle[j] == '\0' || j == len)
		{
			return (char *)(haystack + i);
		}
		i++;
		j = 0;
	}
	return NULL;
}

int main(void)
{
	printf("1) everything from and after B = %s\n", ft_strnstr("Foo Bar Baz", "Bar", 1));
    printf("2) everything from and after Ba = %s\n", ft_strnstr("Foo Bar Baz", "Bar", 2));
    printf("3) everything from and after Bar = %s\n", ft_strnstr("Foo Bar Baz", "Bar", 3));
    printf("4) everything from and after Bar = %s\n", ft_strnstr("Foo Bar Baz", "Bar", 4));
    printf("5) everything from and after Ba = %s\n", ft_strnstr("Foo Bar Baz", "Bax", 2));
    printf("6) NULL = %s\n", ft_strnstr("Foo Bar Baz", "Bax", 3));
    printf("7) Foo Bar Baz = %s\n", ft_strnstr("Foo Bar Baz", "", 2));
}