#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t linked list
 * @head: head of the linked list
 * @index: index of the node, starting at 0
 * Return: Pointer to the nth node if it exists, NULL otherwise
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
  unsigned int count;

  for (count = 0; head && count <= index; count++)
    {
      if (count == index)
	return (head);
      head = head->next;
    }
  return (NULL);
}
