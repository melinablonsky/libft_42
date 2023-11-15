#include <stdio.h>
#include <libc.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *ptr_s;
	unsigned char byte_c; // que c sea tratado como un valor sin signo en el rango de 0 a 255, porque es un caracter.
	unsigned int i;

	byte_c = c;
	ptr_s = (const unsigned char *)s;
	i = 0;

while (i < n)
	{
		if (ptr_s[i] == byte_c)
		{
			return (void *)&ptr_s[i]; // casteo el puntero a devolver para que sea tipo void, porque es lo que devuelve la funcion (void*). &ptrs porque & es la direccion de, y ptrs[i] es adonde apunta el puntero con cada byte por el que avanza.
		}
		i++;
	}
	return NULL;
}

int main ()
{
	char *ptr;
	ptr = ft_memchr("hola", 'l', 4);
	printf("la = %s\n", ptr);

	ptr = memchr("hola", 'l', 4);
	printf( "la = %s\n", ptr);
	
}