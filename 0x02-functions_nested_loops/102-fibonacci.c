#include <stdio.h>

/**
* main - entry point
* Return: always 0.
*/
int main(void)
{
	int i = 0;
	int j = 1, k = 2;

	while (i < 50)
	{
	if (i == 0)
		printf("%d", j);
	else if (i == 2)
		printf(", %d", k);
	else
	{
		k += j;
		j = k - j;
		printf(", %d", k);
	}
		++i;
	}
	printf("\n");
	return (0);
}
