#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list_t list
 * @h: pointer to the head of the list_t list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
  const list_t *current;
  size_t count;

  current = h;
  count = 0;
  while (current != NULL)
    {
      printf("[%u] %s\n", current->str ? current->len : 0, current->str ? current->str : "(nil)");
      current = current->next;
      count++;
    }
  return (count);
}
