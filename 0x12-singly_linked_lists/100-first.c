#include <stdio.h>

/**
 * execute_before_main - fuction to execute before main
 *	made possible by prior declaration of "__attribute__ ((constructor))"
 */

void __attribute__ ((constructor)) execute_before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
