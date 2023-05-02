#include "lists.h"

/**
* add_nodeint_end - adds new node at the end of a linked list.
* @head: pointer to the head of the list.
* @n: the integer value to add to the new node.
* Return: the address of the new element,
* or NULL if it failed.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
	}
	else
	{
		return (NULL);
	}

	if (current != NULL)
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	else
	{
		*head = new_node;
	}
	return (new_node);
}
