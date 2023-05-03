#include "lists.h"

/**
 * print_listint - prints all elements in a linked listint_t list
 * @h: the linked list to print
 * Return: returns the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}
	return (number);
}
