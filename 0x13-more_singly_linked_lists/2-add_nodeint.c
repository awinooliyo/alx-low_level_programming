#include "lists.h"

/**
* add_nodeint - adds a node to the beginning of a linked list.
* @head: the pointer to the head of the list.
* @n: integer to be used as the content.
* Return: address of the newly added node.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	if (head == NULL)
	{
		return (NULL);
	}

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}

	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (temp);
}

