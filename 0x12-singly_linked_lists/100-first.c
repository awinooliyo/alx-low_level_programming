#include <stdio.h>

void before_main(void) __attribute__((constructor));

/**
* before_main - function executed before the main function.
* Return: nothing.
*/

void before_main(void)
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
