#include <stdio.h>
#include <stdlib.h>

/**
 * main - This is the entry Point
 * @argc: Argument Count
 * @argv: Argument Vector
 * Return: Always Zero (Success)
 */

int main(int argc, char *argv[])
{
	int cen;
	int coins;
	int r;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cen = atoi(argv[1]);
	if (cen >= 25)
	{
		coins = cen / 25;
		cen = cen - (25 * coins);
	}
	if (cen >= 10)
	{
		r = cen / 10;
		coins = coins + r;
		cen = cen - (10 * r);
	}
	if (cen >= 5)
	{
		r = cen / 5;
		coins = coins + r;
		cen = cen - (5 * r);
	}
	if (cen >= 2)
	{
		r = cen / 2;
		coins = coins + r;
		cen = cen - (2 * r);
	}
	if (cen >= 1)
	{
		coins += cen;
	}
	printf("%d\n", coins);
	return (0);
}
