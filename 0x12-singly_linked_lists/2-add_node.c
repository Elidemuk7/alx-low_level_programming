#include "lists.h"

/**
 * *add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to pointer to the list_t list
 * @str: the string to be added to the node
 * Return: Returns address of the new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_element;
	unsigned int len = 0;

	while (str[len])
		len++;
	new_element = malloc(sizeof(list_t));
	if (!new_element)
		return (NULL);

	new_element->str = strdup(str);
	new_element->len = len;
	new_element->next = (*head);
	(*head) = new_element;

	return (*head);
}
