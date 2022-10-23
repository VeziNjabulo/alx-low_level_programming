/*
 * file - 4-add.c
 */
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
*main - sum over line arguments
*@argc: number of arguments
*@argv: array of arguments
*Return: 0 on success, 1 if error
*/
int main(int argc, char *argv[])
{
	int i, j, length, sum;
	char *ptr;

	if (argc < 2)
		printf("0\n");
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			ptr = argv[i];
			length = strlen(ptr);

			for (j = 0; j < length; j++)
			{
				if (isdigit(*(ptr + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(argv[i]);
		}

	printf("%d\n", sum);
	}
	return (0);
}
