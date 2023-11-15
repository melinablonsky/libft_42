#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    char *ptr_dst;
    const char *ptr_src;
    size_t i;

    ptr_dst = dst;
    ptr_src = src;
    i = 0;
    while (i < n)
    {
        ptr_dst[i] = ptr_src[i];
        i++;
    }
    return (dst);
}
/*
int main() // opcion 1
{
    char dst[] = "hello"; // si pongo dst[] = "texto" no es lo mismo que poner *dst = "texto" porque, con dst[] estoy declarando un array que contiene un texto y con *dst estoy declaranod un puntero que apunta a un texto y, si ese espacio de memoria tiene que ser modificado, no lo acepta usando *dst porque lo considera constante y no apto para ser modificado, pero al dst[] sí lo acepta para que luego pueda ser modificado por la funcion.
    char *src = "world";
    char dst2[] = "hello";

    ft_memcpy(dst, src, 3);
    printf("ft = %s\n", dst);

    memcpy(dst2, src, 3);
    printf("lb = %s\n", dst2);

}

int main () //opcion 2
{
	char *destino;
	char origen[] = "world";
	char *destino2;

    destino = malloc(10);

    memset(destino, -1, 10);

	ft_memcpy(destino, origen, 1);
	printf("ft = %s\n", destino);

    destino2 = malloc(10);
    
    memset(destino2, -1, 10);
	
	memcpy(destino2, origen, 1);
	printf("lb = %s\n", destino2);
	return 0;
}
*/