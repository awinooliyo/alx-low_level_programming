#include "lists.h"

/**
* get_nodeint_at_index - returns the nth node of a linked list.
* @head: pointer to the head of the linked list.
* @index: index of the node to find (starting at 0).
* Return: pointer to the desired node or
* NULL if it doesn't exist.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t e;

	for (e = 0; (e < index) && (head->next); e++)
	{
		head = head->next;
	}

	if (e < index)
	{
		return (NULL);
	}

	return (head);
}
