/*
 * file -  1-args.c
 */
#include <stdio.h>
/**
 *main - prints the number of arguments passed into it.
 *@argc: number of arguments in the programe
 *@argv: array of pointers to each argument
 *Return: 0
 */
int main (int argc, char *argv[])
{
	(void)(argv);
	printf("%i\n", argc - 1);
	return (0);
}

