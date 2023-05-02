#include <lists.h>

/**
* free_listp - frees a linked list
* @head: head of the linked list.
* Return: void.
*/

void free_listp(listp_t **head)
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
		*head = NULL
	}
}

/**
* print_listint_safe - prints a linked list.
* @head: head of a linked list.
* Return: number of nodes in the linked list.
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t xnodes = 0
	listp_t *hptr, *new, *add;

	htpr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = htpr;
		htpr = new;

		add = htpr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (xnodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		xnodes++;
	}

	free_listp(&hptr);
	return (xnodes);
	}
}
