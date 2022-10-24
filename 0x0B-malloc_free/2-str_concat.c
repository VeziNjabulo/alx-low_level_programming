/*
 * file - 2-str_concat.c
 */

#include "main.h"
#include <stdlib>

/**
 * str_concat - concantenate two strings.
 * @s1: the first string.
 * @s2: second string.
 *
 * Return a pointer to the allocated memory area.
 */
char *str_concat(char *s1, char *s2)
{
	char *cat;
	int i, j, k;

	for (i = 0; s1 && s1[i]; ++i)
		;
	for (j = 0; s2 && s2[j]; ++j)
		;
	cat = (char *)malloc((i + j + 1) * sizeof(char));
	if (cat == NULL)
		return (NULL);
	k = 0;
	for (i = 0; s1 && s1[i]; ++i)
	{
		cat[k] = s1[i];
		++k;
	}
	for (j = 0; s2 && s2[j]; ++j)
	{
		cat[k] = s2[j];
		++k;
	}
	cat[k] = '\0';
	return (cat);
}
