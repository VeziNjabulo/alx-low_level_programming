/*
 * file - 0-sum_them_all.c
 */
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - Entry Point
 * @n: variadic input
 * Return: If n == 0 -)
 * else - sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int sum = 0;


	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(valist, const unsigned int);
	}

	va_end(valist);

	return (sum);
}
