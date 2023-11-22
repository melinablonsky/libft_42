#include <stdio.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	if (needle[j] == '\0')
	{
		return (char *)haystack;
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
