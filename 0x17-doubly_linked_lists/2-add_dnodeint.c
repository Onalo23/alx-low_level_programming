#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: double pointer to the dlistint_t list
 * @n: number of element to add in the node
 *
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *cha;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	cha = *head;

	if (cha != NULL)
	{
		while (cha->prev != NULL)
			cha = cha->prev;
	}

	new->next = cha;

	if (cha != NULL)
		cha->prev = new;
	*head = new;

	return (new);
}


