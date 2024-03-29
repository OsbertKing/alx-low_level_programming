#include "lists.h"
#include <studio.h>

/**
* print_listint - prints all the elemants of a list_t list
* @h: Heady of the list
* Return: Number of  nodes in the list
*/

size_t print_listint(const listint_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        printf("%d\n", h->n);
        h = h->next;
        count++;
    }

    return (count)
}
