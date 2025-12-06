#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - Add a node at the end of a doubly linked list
 * @head: A pointer to the head of the list
 * @n: The integer to store in the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new;
    dlistint_t *l;

    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        return (NULL);
    }
    new->n = n;
    new->next = NULL;
    if (*head == NULL)
    {
        new->prev = NULL;
        *head = new;
        return (new);
    }
    l = *head;
    while (l->next != NULL)
    {
        l = l->next;
    }
    l->next = new;
    new->prev = l;
    return (new);
}
