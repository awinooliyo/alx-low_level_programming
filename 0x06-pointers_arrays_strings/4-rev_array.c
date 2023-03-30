#include "main.h"

/**
* reverse_array - a function that reverses the content of an array of integers.
* @a: an array of integers.
* @n: number of elements in the array.
*/

void reverse_array(int *a, int n)
{
	int i = 0;
	int h;

	while (i < n / 2)
	{
		h = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = h;
		i++;
	}
}
