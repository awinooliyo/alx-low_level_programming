#include "lists.h"


/**
* free_listint_safe - Frees a lisint_t linked list.
* @h: pointer to a pointer to the end of the
*	head node of the list.
* Return: The number of nodes in the list that were freed.
*/

size_t free_listint_safe(listint_t **h)
{
	listint_t *curr, *nxt;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);

	curr = *h;
	*h = NULL;
	nxt = NULL;

	while (curr != NULL)
	{
		count++;
		free(curr);
		if (nxt >= curr)
		{
			curr = NULL;
			break;
		}
		curr = nxt;
	}

	return (count);
}
