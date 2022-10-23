/*
 * file - 0-whatsmyname.c
 */
#include <stdio.h>
/**
 * main - prints its name, followed by a new line.
 * @argc: number of arguments
 * @argv: array of pointers to each argument.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)(argc);
	printf("%s\n", argv[0]);
	return (0);
}
