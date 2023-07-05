#include "lists.h"

/**
 * *get_nodeint_at_index - a function that returns the nth node of a listint_t linked list
 * @head: first node in the listint_t linked list
 * @index: the index of the node
 * Return: the nth node of the linked list or 0 if node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int p;
	listint_t *tem = head;

	p = 0;

	while (tem && p < index)
	{
		tem = tem->next;
		p++;
	}
	return (tem ? tem : NULL);
}
