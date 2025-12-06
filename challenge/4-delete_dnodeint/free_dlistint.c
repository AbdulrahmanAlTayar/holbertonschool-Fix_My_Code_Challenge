#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Free a doubly linked list
 * @head: A pointer to the head of the list
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *node;

    while (head)
    {
        node = head;
        head = head->next;
        free(node);
    }
}
