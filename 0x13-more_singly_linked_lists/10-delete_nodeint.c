#include "lists.h"


/**
* delete_nodeint_at_index - deletes the node at index of a linked list.
* @head: pointer to the head of a linked list.
* @index: the index of the node to be deleted
* (starting at 0)
* Return: 1 if functionucceeds
*	-1 if the function fails.
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *copy = *head;
	unsigned int e;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (e = 0; e < (index - 1); e++)
	{
		if (copy->next == NULL)
			return (-1);
		copy = copy->next;
	}

	temp = copy->next;
	copy->next = temp->next;
	free(temp);
	return (1);

}

