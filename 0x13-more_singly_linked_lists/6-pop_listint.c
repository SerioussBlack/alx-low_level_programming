#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 *               and returns its data.
 *
 * @head: A pointer to a pointer to the first node of the list.
 *
 * Return: If the list is empty, 0. Otherwise, the data of the
 *         deleted head node.
 */
int pop_listint(listint_t **head)
{
    listint_t *temp;
    int n;

    /* Check if list is empty */
    if (*head == NULL)
        return (0);

    /* Save data and next node */
    n = (*head)->n;
    temp = (*head)->next;

    /* Free head node */
    free(*head);

    /* Update head pointer */
    *head = temp;

    return (n);
}

