#include "lists.h"

/**
* insert_dnodeint_at_index -  inserts a new node at a given position.
* @h: pointer to a pointer.
* @idx: index of the list where new node will be addded.
* @n: the element to be added.
*
* Return: address of the new node or Null if it fails.
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		if (*h != NULL)
			(*h)->prev = new_node;
		new_node->next = *h;
		*h = new_node;
	}

	while (i < idx - 1)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
		return (NULL);
	new_node->next = temp->next;
	new_node->prev = temp;
	if (temp->next == new_node)
		temp->next->prev = new_node;
	temp->next = new_node;
	return (new_node);
}
