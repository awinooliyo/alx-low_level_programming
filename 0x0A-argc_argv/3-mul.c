#include <stdio.h>
#include <stdlib.h>


/**
* main - multiplies two numbers and prints the result.
* @argc: the count of arguments passed to the program.
* @argv: the array pointer to the arguments passed.
*
* Return: 0 if the program receives two arguments.
*	  -1 if the program does not receive the 2 arguments.
*/

int main(int argc, char *argv[])
{
	int x, y, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	result = x * y;

	printf("%d\n", result);

	return (0);
}
