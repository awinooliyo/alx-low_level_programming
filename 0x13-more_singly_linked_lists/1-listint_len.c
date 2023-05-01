#include "lists.h"


/**
* listint_len - returns the number of elements in a linked list.
* @h: pointer to the head of the list.
* Return: the number of elements in the list.
*/

size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
