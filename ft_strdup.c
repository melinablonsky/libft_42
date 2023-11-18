/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblonsky <mblonsky@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:00:34 by mblonsky          #+#    #+#             */
/*   Updated: 2023/11/16 11:56:59 by mblonsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{   
    size_t len;

    len = ft_strlen(s1) + 1;

    char *dup;

    dup = (char *)malloc(len);
    if (dup != NULL)
    {
        ft_strlcpy(dup, s1, len);
    }
    return (dup);
}