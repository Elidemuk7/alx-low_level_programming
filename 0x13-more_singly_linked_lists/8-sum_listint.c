#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to the first node in the linked list
 * Return: returns sum of all the data or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *tem = head;

	sum = 0;

	while (tem)
	{
		sum = sum + tem->n;
		tem = tem->next;
	}
	return (sum);
}

