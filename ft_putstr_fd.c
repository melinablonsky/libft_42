/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblonsky <mblonsky@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:13:00 by mblonsky          #+#    #+#             */
/*   Updated: 2023/11/18 12:13:54 by mblonsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
if (s != NULL) // DUDA: quiero chequear primero si s en nullo pero no puedo subirlo porque me queda la creacion de la variable en el if, y no quiero cambiar el write metiendo ft adentro del parentesis porque despues me cuesta entenderla.
    {
        write(fd, s, ft_strlen(s));
    }
}