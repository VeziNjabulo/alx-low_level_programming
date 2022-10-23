/*
 * file - 1-memcpy.c
 */
#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: target array
 * @src: array to copy
 * @n:  bytes of memory
 * Reaturn: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
