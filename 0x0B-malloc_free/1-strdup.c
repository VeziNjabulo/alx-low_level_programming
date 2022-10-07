/*
 * file - 1-strdup.c
 */

#include "main.h"
#include <sdtlib>

/**
 * _strdup - a function to copy a string on a new allocated memory
 * area.
 * @str: string to copy.
 *
 * Return: a pointer to the copied string.
 */
char *_strdup(char *str)
{
	char *pstr;
	unsigned int i = 0;

	if (str == 0)
		return (0);
	while (str[i] != 0)
		i++;
	i++;
	pstr = malloc(sizeof(char) * i);
	for (i = 0; str[i] != 0; i++)
		pstr[i] = str[i];
	pstr[i] = 0;
	return (pstr);
}
