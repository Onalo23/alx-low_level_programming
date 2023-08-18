#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <stddef.h>
/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the dlistint_t list
 *
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
