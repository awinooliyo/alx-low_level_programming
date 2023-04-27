#include "lists.h"


/**
* add_node - adds a new node at the beginning of a list of list_t list.
* @head: head of the linked list.
* @str: string to store in the list.
* Return: address the head.
*/

list_t *add_node(list_t **head, const char *str)
{
	/**** allocating memory for the new node ***/
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	/** copying the string and calculating its length **/
	new_node->str = strdup(str);
	new_node->len = strlen(str);

	new_node->next = *head;

	*head = new_node;

	return (*head);
}
