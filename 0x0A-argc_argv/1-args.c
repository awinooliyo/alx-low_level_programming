#include <stdio.h>


/**
* main - prints the number of arguments passed to it.
* @argc: the number of arguments passed to the program.
* @argv: the array of pointers to the arguments passed.
*
* Return: always 0 on success.
*/

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
