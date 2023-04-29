#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibbonacci numbers
 * starting with 1 and 2, followed by a new line.
 * Return: Always 0.
 */

int main(void)
{
	/* initializing variables */
	int prev = 1;
	int current = 2;
	int count = 2;

	/* print the first two numbers */
	printf("%d, %d, ", prev, current);

	/* generate the remaining numbers */
	while (count < 98)
	{
		/* calculating the next number */
		int next_num = prev + current;

		/* printing the next number */
		printf("%d, ", next_num);

		/* updating the variables for the next itaration */
		prev = current;
		current = next_num;
		count++;
	}
	printf("\n"); /* printing new line at the end */

	return (0);
}
