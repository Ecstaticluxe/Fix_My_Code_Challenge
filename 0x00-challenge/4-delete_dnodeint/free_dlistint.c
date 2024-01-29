#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Free a list
 *
 * @head: A pointer to the first element of the list
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *node, *next_node;

    while (head)
    {
        node = head;
        next_node = head->next;
        free(node);
        head = next_node;
    }
}
