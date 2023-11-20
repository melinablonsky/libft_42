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

#include "libft.h"

//COUNT PARTS AND RESERVE ARRAY MEMORY
static char **function_alloc_parts(char *str, char c) //(str y c son los param de split). Cuenta cuanto miden las partes de dividir y asigna memoria para el array de punteros a las strings.
{
	int	i; //iterador de la cadena str
	int parts_count; //contador de partes de la cadena str
	int checkpoint; //indica en qué posicion está antes de empezar a contar caracteres en una parte de la cadena
	char **parts; //el array de punteros que devolverá split.

	i = 0;
	parts_count = 0;
	while(str[i]) // (str[i] -->(mientras str[i] no sea nulo). Cuento la cantidad de partes en str que están separadas por el delimitador c y creo el espacio de memoria que las alojará
	{
		while(str[i] && str[i] == c) //mientras str no llegue al nulo (stri[i] y mientras str[i] sea igual a c (aumenta i hasta que encuentra un caracter que no es c, o llega al nulo).
		{
			i++;
		}
		checkpoint = i; //para asegurarme de que checkpoint se actualice cada vez que se itera en el while.
		while(str[i] && str[i] != c) //mientas str no llegue al nulo y sea distinto de c (avanza hasta que encuentra c o llegue al nulo)
		{
			i++;
		}
		if(i > checkpoint) //La expresión i > checkpoint evaluará a true o false, y en C, true se convierte en 1 y false se convierte en 0 al realizar operaciones aritméticas. Por lo tanto, parts_count se incrementará en 1 si i es mayor que checkpoint. La expresión original utiliza la forma concisa de expresar esto usando el operador +=.
		{
			parts_count++; //al final tengo cuantas cadenas hay separadas por c.
		}
	}
	parts = ft_calloc( parts_count + 1, sizeof(char *)); //creo la memoria para el array (cadenas +1)
	if(!parts)
		{
			return(NULL);
		}
	return(parts); //devuelvo el puntero a ese espacio de memoria que tiene el array.
}





//COUNT VALID CHARS
static int function_count_valid_chars(char *str, char c) //cuenta la cantidad de caracteres válidos en la parte actual (sin contar delimitadores)
{
	int	i;

	i = 0;
	while (str[i] && str[i] !=c)
	{
		i++;
	}
	return (i);
}





// FREE PARTS
static void function_free_parts(char **parts, int j) //ibera la memoria asignada dinámicamente para las strings y para el array de punteros (parts)
{
	while (j--) //decrementa hasta llegar a cero. //COMO SABE QUE CORTA EN CERO?
	{
		free(parts[j]); //libera la memoria para cada string (?) en el array de punteros
	}
	free(parts); // se libera la memoria asignada al array (parts)
}





// FILL PARTS
static char **function_fill_parts(char **parts, char *str, char c) // llena las cadenas con sus caracteres
{
	int	i; // recorre str
	int	j; //para indexar los valores (asignar valores a las posiciones específicas del array)
	int	valid_char_count;

	i = 0;
	j = 0;
	while(str[i])
	{
		while(str[i] && str[i]== c) // si encuentra a c, avanza en la cadena, sumando i.
		{
			i++;
		}
		valid_char_count = function_count_valid_chars(&str[i],c);
		if(valid_char_count > 0) // si la parte actual tiene al menos un caracter válido....
		{
			parts[j] = ft_substr(str, i, valid_char_count); //crea una subcadena y se la asigna a parts[j] en la matriz de partes.
			if(!parts[j]) //verifico si la asignacion de memoria fue exitosa. si no fue exitosa, se libera esa memoria asignada hasta ese punto y devuelve null.
			{
				function_free_parts(parts, j);
				return(NULL);
			}
			j++; //pasa a la siguiente posicion del array de punteros (parts)
		}
		while(str[i] && str[i] != c)
		{
			i++;
		}
	}
	return(parts); //devuelve el array de punteros, que ahora contiene las partes no vacias de str.
}






//SPLIT
char **ft_split(char const *s, char c)
{
	char **parts;
	char *str;

	str = (char *)s; // le quito a mi string s el const dejandola solo como un puntero a un char.
	if(!str) // ES NECESARIO? si porque el puntero que recibo puede estar apuntando a un nulo
	{
		return (NULL);
	}
	parts = function_alloc_parts(str, c); //para asignar memoria al array segun la cantidad de strings que voy a tener adentro.
	if(!parts)
	{
		return(NULL);
	}
	parts = function_fill_parts(parts, str, c); // creo que llena los caracteres de cada string (?) 
	return(parts);
}