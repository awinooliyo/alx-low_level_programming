#include <stdio.h>
/**
* main - entry point.
*
* Return: always 0 (success).
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + 'o');
	putchar('\n');
	return (0);
}
