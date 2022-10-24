/*
 * file - 1-strdup.c
 */

#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - a function to copy a string on a new allocated memory
 * area.
 * @str: string to copy.
 *
 * Return: a pointer to the copied string.
 */
char *_strdup(char *str)
{

	int i, j;
	char *dup;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	dup = (char *)malloc((i + 1) * sizeof(char));
	if (dup == NULL)
		return (dup);
	for (j = 0; j <= i; ++j)
		dup[j] = str[j];
	return (dup);
}
