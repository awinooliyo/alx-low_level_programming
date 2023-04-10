#include <stdio.h>


/**
* main - prints all the arguments it receives.
* @argc: The number of arguments passed to the program.
* @argv: the pointer to the arguments passed.
*
* Return: always 0 on success.
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
