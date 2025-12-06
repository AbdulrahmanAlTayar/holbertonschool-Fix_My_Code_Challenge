#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Delete a node at a given position
 * @head: A pointer to the head of the list
 * @index: The position of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *saved_head;
    dlistint_t *tmp;
    unsigned int p;

    if (*head == NULL)
    {
        return (-1);
    }
    saved_head = *head;
    if (index == 0)
    {
        *head = saved_head->next;
        if (*head != NULL)
        {
            (*head)->prev = NULL;
        }
        free(saved_head);
        return (1);
    }
    p = 0;
    while (p < index && saved_head->next != NULL)
    {
        saved_head = saved_head->next;
        p++;
    }
    if (p != index)
    {
        return (-1);
    }
    if (saved_head->next == NULL)
    {
        tmp = saved_head->prev;
        tmp->next = NULL;
        free(saved_head);
        return (1);
    }
    tmp = saved_head;
    saved_head->prev->next = saved_head->next;
    saved_head->next->prev = saved_head->prev;
    free(tmp);
    return (1);
}
