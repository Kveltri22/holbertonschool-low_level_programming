#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_list - a function that frees a list
 * @head: The first node
 * Return: free
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;

	if (head->next != NULL)
		free_list(head->next);
	free(head->str);
	free(head);
}
