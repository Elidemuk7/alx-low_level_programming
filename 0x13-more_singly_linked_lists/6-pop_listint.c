#include "lists.h"

/**
 * pop_listint - a funtion that deletes the head node and returns the head node's data(n)
 * @head: pointer to the linked list
 * Return: the head node's date(n) or 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tem;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	tem = (*head)->next;
	free(*head);
	*head = tem;

	return (number);
}
