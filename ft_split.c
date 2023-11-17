/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblonsky <mblonsky@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 20:05:46 by mblonsky          #+#    #+#             */
/*   Updated: 2023/11/16 11:52:50 by mblonsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include<stdio.h>

char **ft_split(char const *s, char c)
{
	size_t	i;
	char *ptr_n;

	i=0;
	while (s[i])
	{
		while (s[i] != '\0')
		{
			ft_strchr(s, c);
			i++;
		}
		ptr_n = s[i];
	}



}

int main()
{
	char	*string = "hola que tal";
	int	c = ' ';

	char	*result = ft_strchr(string, c);
	printf("%s\n", result);
}
