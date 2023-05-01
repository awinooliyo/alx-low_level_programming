#include "lists.h"


/**
* print_listint - prints all the elements of a listint_t list.
* @h: head of the list.
* Return: the number of nodes.
*/

size_t print_listint(const listint_t *h)
{
	const listint_t *listy = h;
	size_t count = 0;

	while (listy != NULL)
	{
		printf("%d\n", listy->n);
		count += 1;
		listy = listy->next;
	}
	return (count);
} 
