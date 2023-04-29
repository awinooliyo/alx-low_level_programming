#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibbonacci numbers
 * starting with 1 and 2, followed by a new line.
 * Return: Always 0.
 */

int main(void)
{
	/* initializing variables */
	unsigned long int i = 1;
	unsigned long int j = 1;
	unsigned long int k = 2;
	unsigned long int j1 = 0;
	unsigned long int j2 = 0;
	unsigned long int k1 = 0;
	unsigned long int k2 = 0;

	/* print the first number */
	printf("%lu, ", j);

	/* generate the remaining numbers */
	while (i < 98)
	{
		/* calculating the next number */
		printf("%lu, ", j);
		k = k + j;
		j = k - j;

		/* splitting the numbers into 9 digit chunks for larger values*/

		if (k >= 1000000000)
		{
			k1 = j1 + k / 1000000000;
			k2 = k % 1000000000;
			j1 = k1 - j1;
			j2 = k2 - j2;
		}

		i++;
	}
	printf("%lu\n", k); /* printing the last number and new line at the end */

	return (0);
}
