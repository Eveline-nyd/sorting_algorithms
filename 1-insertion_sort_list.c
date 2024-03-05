#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 *                        in ascending order using Insertion sort algorithm
 *
 * @list: Double pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
listint_t *current, *next, *tmp;

if (list == NULL || *list == NULL || (*list)->next == NULL)
return;

current = (*list)->next;
while (current != NULL)
{
next = current->next;
while (current->prev != NULL && current->n < current->prev->n)
{
tmp = current->prev;
current->prev = tmp->prev;
tmp->next = current->next;
current->next = tmp;
if (tmp->prev != NULL)
tmp->prev->next = current;
tmp->prev = current;
if (*list == tmp)
*list = current;
if (tmp->next != NULL)
tmp->next->prev = tmp;
print_list(*list);
}
current = next;
}
}

