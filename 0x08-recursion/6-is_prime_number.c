/*
 * file - 6-is_prime_number.c
 */
#include "main.h"
/**
*aux - find out exact divider
* @a: number
* @b: divisor
*Return: exact div
*/
int aux(int a, int b)
{
	if (b >= a)
		return (1);
	if (a % b == 0 && a != b)
		return (0);
	return (aux(a, b + 1));
}
#include "main.h"
/**
* is_prime_number - returns 1 if input integer is a prime number, otherwise 0
* @n: number
* Return: 1 or 0
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (aux(n, 2));
}
Footer
© 2022 GitHub, Inc.
