#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: double pointer to the dlistint_t list
 * @n: the value of element
 *
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *cha;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	cha = *head;

	if (cha != NULL)
	{
		while (cha->next != NULL)
			cha = cha->next;
		cha->next = new;
	}
	else
	{
		*head = new;
	}

	new->prev = cha;

	return (new);
}
