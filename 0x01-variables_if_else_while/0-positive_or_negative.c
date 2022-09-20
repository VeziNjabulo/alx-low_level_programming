#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main -Determine if a random numbre is positive, negetive or zero.
(* 
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("%d is %s\n", n, "negetive");
	}
        else if (n > 0)
	{
		printf("%d is %s\n", n, "positive");
	}
        else
	{	
		printf("%d is %s\n", n, "zero");
	}
	return (0);

}
