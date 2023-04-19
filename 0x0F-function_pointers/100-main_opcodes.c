#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own operation code
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int bytes, ind;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;
	for (ind = 0; ind < bytes; ind++)
	{
		if (ind == bytes - 1)
		{
			printf("%02hhx\n", arr[ind]);
			break;
		}
		printf("%02hhx ", arr[ind]);
	}
	return (0);
}
