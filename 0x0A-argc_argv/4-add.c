#include <stdio.h>
#include <stdlib.h>

/**
*main - program that adds positive numbers
*@argc: Argument counter
*@argv: Argument vector
*Return: 1 if number contains non-digits, otherwise 0
*/

int main(int argc, char *argv[])
{
	int k, b, sum = 0;

	for (k = 1; k < argc; k++)
	{
		for (b = 0; argv[k][b] != '\0'; b++)
		{
			if (argv[k][b] < '0' || argv[k][b] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[k]);
	}

	printf("%d\n", sum);

	return (0);
}
