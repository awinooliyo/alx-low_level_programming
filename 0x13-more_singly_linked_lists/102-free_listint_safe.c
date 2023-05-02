#include "lists.h"

/**
* free_listp2 - frees a linked list.
* @head: head of a list.
* Return: nothing.
*/

void free_listp2(listp_t **head)
{
	listp_t *temp;
	listp_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
* free_listint_safe - Frees a lisint_t linked list.
* @h: pointer to a pointer to the end of the
*	head node of the list.
* Return: The number of nodes in the list that were freed.
*/

size_t free_listint_safe(listint_t **h)
{
	size_t xnodes = 0;
	listp_t *hptr, *new, *addtn;
	listint_t *curr;

	hptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
		{
			exit(98);
		}

		new->p = (void *)*h;
		new->next = hptr;
		hptr = new;

		addtn = hptr;

		while (addtn->next != NULL)
		{
			addtn = addtn->next;
			if (*h == addtn->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (xnodes);
			}
		}

		curr = *h;
		*h = (*h)->next;
		free(curr);
		xnodes++;
	}

	*h = NULL;
	free_listp2(&hptr);
	return (xnodes);
}
