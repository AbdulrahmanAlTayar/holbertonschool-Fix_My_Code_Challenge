#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints a doubly linked list of integers
 * @h: A pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t n;

    n = 0;
    while (h)
    {
        printf("%d\n", h->n);
        h = h->next;
        n++;
    }
    return (n);
}
