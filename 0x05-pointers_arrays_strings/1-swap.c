/*
 *1-swap.c
 */

#include "main.h"

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}