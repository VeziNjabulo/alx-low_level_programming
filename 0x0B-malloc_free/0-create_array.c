/*
 * file - 0-create_array.c
 */
#include "main.h"
#include <stdlib.h>

/**
 * create_array - a program that creates a dynamic memory allocation
 * filled with a specific character c .
 * @size : size of an array.
 * @c: character.
 * Return: pointer to the Array or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *pstr;
	unsigned int i;

	pstr = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
		pstr[i] = c;
	pstr[i] = 0;
	return (size < 1 ? 0 : pstr);
}
