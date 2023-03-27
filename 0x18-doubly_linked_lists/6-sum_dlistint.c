#include "lists.h"

/**
 *sum_dlistint - lists the sum of int
 *@head: head list 
 *Return: sum of data bro
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
