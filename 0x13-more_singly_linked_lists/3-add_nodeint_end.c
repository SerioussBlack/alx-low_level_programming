#include <stdio.h>
#include <stdlib.h>

/* Define the structure for a singly linked list node */
typedef struct listint_s {
    int n;
    struct listint_s *next;
} listint_t;

/* Function to add a new node at the end of a list */
listint_t *add_nodeint_end(listint_t **head, const int n) {
    /* Create a new node */
    listint_t *new_node = malloc(sizeof(listint_t));
    if (new_node == NULL) {
        return NULL;  /* Failed to allocate memory */
    }

    /* Initialize the new node */
    new_node->n = n;
    new_node->next = NULL;

    /* If the list is empty, make the new node the head */
    if (*head == NULL) {
        *head = new_node;
    }
    else {
        /* Traverse the list to find the last node */
        listint_t *current = *head;
        while (current->next != NULL) {
            current = current->next;
        }

        /* Append the new node to the end of the list */
        current->next = new_node;
    }

    return new_node;
}

