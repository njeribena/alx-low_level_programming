#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print the name
 * @name: string to be printed
 * @f: pointer to function that prints name
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
