#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * listint_len - calculates the number of elements in a linked list
 * @h: pointer to the head of the linked list
 *
 * Return: the number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
  const listint_t *current;
  size_t count;

  count = 0;
  current = h;
  while (current != NULL)
    {
      count++;
      current = current->next;
    }
  return (count);
}
