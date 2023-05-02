#include "lists.h"


/**
* insert_nodeint_at_index - adds a new node to a i
* linked list at a given position.
* @head: pointer to the head of the linked list.
* @idx: index of the list where the new node is added, starting from 0.
* @n: value of the new node to be added.
* Return: pointer to the new node or NULL.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current = *head;
	unsigned int e;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (e = 0; current != NULL && e < idx - 1; e++)
		current = current->next;

	if (e != idx - 1)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
