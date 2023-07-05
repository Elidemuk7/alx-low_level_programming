#include "lists.h"

/**
 * *add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the first element in the list
 * @n: input in the new element
 * Return: returns the address of the new element or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *tem = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (tem->next)
	{
		tem = tem->next;
	}
	tem->next = new_node;
	return (new_node);
}
