#include <stdio.h>
#include <stdlib.h>

/**
* main - program that adds positive numbers
*	it then prints the result followed by a new line.
* @argc: the count of arguments passed to the program.
* @argv: the array of pointers to the arguments passed.
*
* Return: -1 if one of the numbers are non-digit symbols, otherwise 0.
*/

int main(int argc, char *argv[])
{
	int x, y, sum = 0;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y]; y++)
		{
			if (argv[x][y] < '0' || argv[x][y] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[x]);
	}

	printf("%d\n", sum);

	return (0);
}

