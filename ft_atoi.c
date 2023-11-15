/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblonsky <mblonsky@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:57:32 by mblonsky          #+#    #+#             */
/*   Updated: 2023/10/26 16:45:02 by mblonsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == 't' || str[i] == '\n'
			|| str[i] == '\r' || str[i] =='\v' || str[i] == '\f')
	{
		i++;
	}
	if (str[i] =='+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}


/*
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