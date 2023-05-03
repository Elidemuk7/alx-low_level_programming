
#include "lists.h"

/**
 * *insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first node in the list
 * @idx: index of the list where the new node should be added
 * @n: input data in the new node
 * Return: returns address of the new node or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int p;
	listint_t *new_node;
	listint_t *tem = *head;

	p = 0;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (tem && p < idx)
	{
		if (p == idx - 1)
		{
			new_node->next = tem->next;
			tem->next = new_node;
			return (new_node);
		}
		else
		{
			tem = tem->next;
		}
	}
	p++;

	return (NULL);
}
