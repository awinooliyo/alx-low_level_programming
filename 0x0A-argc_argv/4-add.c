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
	int sum = 0, num = 1;

	while (num < argc)
	{
		int digit = 0;

		while (argv[num][digit] != '\0')
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
			digit++;
		}
		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);
	return (0);
}

