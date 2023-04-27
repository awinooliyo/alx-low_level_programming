#include <stdio.h>


/**
* first - function executed before the main function.
* Return: nothing.
*/

void __attribute__ ((constructor)) first()
{
	printf("You're beat! and yet, you must allow\n");
	printf(",\nI bore my house upon my back!\n");
}
