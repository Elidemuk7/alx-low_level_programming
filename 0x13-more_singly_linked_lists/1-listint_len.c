#include "lists.h"

/**
 * listint_len - a function that returns the number of elements in a linked listint_t list
 * @h: linked list
 * Return: returns number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}
	return (number);
}
