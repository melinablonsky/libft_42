#include "libft.h"

/*int main()
{
	char	*string = "hola que tal";
	int	c = ' ';

	char	**result = ft_split(string, c);
	(void)result;
    

}*/

int main()
{
	char s[] = "hello";
	char start = 'e';

	ft_substr(s, start, 3);
	printf(" = %s\n", s);
	return (0);
}