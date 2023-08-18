#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <stddef.h>
/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the dlistint_t list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
