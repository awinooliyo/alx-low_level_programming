#include <stdio.h>


/**
* main - prints the name of program, followed by new line.
* @argc: the count of argiuments given to a program.
* @argv: an array of pointers to the arguments passed.
*
* Return: always 0 on success.
*/

int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
