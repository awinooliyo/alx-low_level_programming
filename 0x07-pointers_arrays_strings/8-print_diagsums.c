#include "main.h"
#include <stdio.h>

/**
*print_diagsums - prints the sum of two diagonals of square matrix of int.
*@a:seond array of int type.
*@size: size of array (square).
*/

void print_diagsums(int *a, int size)
{
	int i, sum, sizer;

	sum = 0;
	sizer = size * size;

	for (i = 0; i < sizer; i++)
	{
		if (i % (size + 1) == 0)
		{
		sum += a[i];
		}
	}
	printf("%d, ", sum);

	sum = 0;

	for (i = 0; i < sizer; i++)
	{
		if (i % (size - 1) == 0 && i != (sizer - 1) && i != 0)
		{
			sum += a[i];
		}
	}
	printf("%d\n", sum);
}
