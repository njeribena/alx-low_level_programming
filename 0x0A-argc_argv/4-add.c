#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_number - check - string there are digit
 * @str: array str
 *
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
	/*Declaring variables*/
	unsigned int c;

	c = 0;
	while (c < strlen(str)) /*count string*/

	{
		if (!isdigit(str[c])) /*check if str there are digit*/
		{
			return (0);
		}

		c++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: C arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{

	/*Declaring variables*/
	int c;
	int str_to_int;
	int sum = 0;

	c = 1;
	while (c < argc) /*Goes through the whole array*/
	{
		if (check_num(argv[count]))

		{
			str_to_int = atoi(argv[c]); /*ATOI --> convert string to int*/
			sum += str_to_int;
		}

		/*Con if one of the number contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		c++;
	}

	printf("%d\n", sum); /*print sum*/

	return (0);
}

