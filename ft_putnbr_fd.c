/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblonsky <mblonsky@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 13:33:01 by mblonsky          #+#    #+#             */
/*   Updated: 2023/11/18 13:33:06 by mblonsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    if(n == -2147483648) // valor mínimo representable para un entero de 32 bits (un int).
    {
        ft_putchar_fd('-', fd); //imprimo un menos
        ft_putchar_fd('2', fd); // imprimo un 2
        n = 147483648; // establezco que n es este valor, para evitar el futuro desbordamiento de n.
    }
    if (n < 0) // si n es negativo, excluyendo el caso anterior...
    {
        ft_putchar_fd('-', fd); // imprimo el menos
        ft_putnbr_fd(-n, fd); // llamo recursivamente mi funcion ft_putnbr_fd con -n, para manejar la impresion de digitos del número final en su forma positiva. La recursión continúa hasta que se llega a un caso base (el número tiene un solo dígito o es 0), y se empiezan a imprimir los dígitos uno por uno. La recursión es necesaria para imprimir cada dígito del número, y la condición if (n < 0) garantiza que se manejen correctamente tanto números negativos como positivos. En lugar de un bucle while, la recursión se utiliza para dividir el problema en subproblemas más pequeños hasta alcanzar un caso base. La llamada recursiva se hace con el valor absoluto de n, es decir, -n. Esto asegura que el siguiente nivel de la recursión trate con un valor positivo. La recursión continúa hasta que n es no negativo, y en ese momento, la ejecución sigue con la lógica en el bloque else.Cada llamada recursiva maneja una parte más pequeña del problema original hasta que se llega a un caso base, en este caso, cuando n es un solo dígito o cero. La llamada recursiva permite que la función ft_putnbr_fd se llame a sí misma con nuevos valores y aborde problemas más pequeños, evitando la necesidad de un bucle explícito.En la programación recursiva, el caso base marca el final de la recursión y evita que se hagan llamadas infinitas. En este caso, el caso base es cuando n es un solo dígito o cero.
    }
    else
    {
        if (n <= 9) // si n es un solo digito, lo imprime sumandole '0' para convertir el valor numerico en un caracter. (si n=3, n+0 ='3' en ascii). lo imprime en el fd que le indique.
        {
            ft_putchar_fd(n + '0', fd);
        }
        else // si n es positivo pero tiene más de 1 dígito, 
        {
            ft_putnbr_fd(n / 10, fd); // si n = 123, n/10 = 12,3 (entonces 12). La función ft_putnbr_fd se llama recursivamente con este nuevo valor.
            ft_putchar_fd(n % 10 + '0', fd); // n % 10 toma el residuo de la division (3), y lo imprime.
        }
    }
}
