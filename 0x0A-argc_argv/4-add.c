#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * @argc: Argument Count
 * @argv: Argument Vector
 * Return: Always Zero (Success)
 */

int main(int argc, char *argv[])
{
	int j, sum;

	sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	for (j = 1; j < argc; j++)
	{
		if (atoi(argv[j]) == 0)
		{
			printf("Error\n");
			return (1);
		}
	}
	for (j = 1; j < argc; j++)
	{
		sum += (atoi(argv[j]));
	}
	printf("%d\n", sum);
	return (0);
}

