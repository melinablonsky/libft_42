/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblonsky <mblonsky@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:39:31 by mblonsky          #+#    #+#             */
/*   Updated: 2023/11/15 12:42:04 by mblonsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>


int     ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
void    *ft_calloc(size_t count, size_t size);
int     ft_isalnum(int c);
int     ft_isalpha(int c);
int     ft_isascii(int c);
int     ft_isdigit(int c);
int     ft_isprint(int c);
void	*ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_memcpy(void *dst, const void *src, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
void    *ft_memset(void *b, int c, size_t len);
char	*ft_strchr (const char *s, int c);
char    *strdup(const char *s1);
size_t  ft_strlcat(char *restrict dst, const char * restrict src, size_t dstsize);
size_t  ft_strlcpy(char *restrict dst, const char * restrict src, size_t dstsize);
int     ft_strlen(const char *str);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr (const char *s, int c);


#endif