#include "lists.h"

/**
 * *add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to pointer to the list_t list
 * @str: string
 * Return: the address of the new element or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_element;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_element = malloc(sizeof(list_t));
	if (!new_element)
		return (NULL);

	new_element->str = strdup(str);
	new_element->len = len;
	new_element->next = NULL;

	if (*head == NULL)
	{
		*head = new_element;
		return (new_element);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new_element;
	return (new_element);
}
