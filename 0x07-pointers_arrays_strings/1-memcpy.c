#include "main.h"
/**
 * *_memcpy - copy a memory area
 * @dest: memory area where to be copy to
 * @src: memory area where to copy from
 * @n: number of bytes to be copied
 *
 * Return: memory area with the copied n bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x;
	int c = n;

	for (x = 0; x < c; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
