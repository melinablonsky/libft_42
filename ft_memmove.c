#include<stdio.h>
#include<libc.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
    char *ptr_dst;
    const char *ptr_src;
    size_t i;

    ptr_dst = (char *)dst;
    ptr_src = src;
    i = 0;


    if(ptr_dst > ptr_src)
    {
        while (len > 0)
        {
            ptr_dst[len - 1] = ptr_src[len - 1];
            len--;
        }
    }
    else
    {
        while (i < len)
        {
            ptr_dst[i] = ptr_src[i];
            i++;
        }
    }
    return(dst);
}

int main ()
{
    // SI NO SE SOLAPAN:
    char dst[10];
    char src[10];

    memset(dst, 'a', 4);
    memset(src, 'b', 3);

    ft_memmove(dst, src, 3);
	printf("ft = %s\n", dst);

    char *dst2;
    char src2[]="1234";
    dst2 =&src2[1];

    ft_memmove(dst2, src2, 3);
	printf("ft = %s\n", dst2);
}