#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: a pointer to the pointer to the first element of the list
 * @str: a pointer to the string to be added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
  list_t *new_node;
  list_t *current;

  new_node = malloc(sizeof(list_t));
  if (!new_node)
    return (NULL);

  new_node->str = strdup(str);
  if (!new_node->str)
    {
      free(new_node);
      return (NULL);
    }

  new_node->len = strlen(str);
  new_node->next = NULL;

  if (*head == NULL)
    {
      *head = new_node;
    }
  else
    {
      current = *head;
      while (current->next != NULL)
	current = current->next;
      current->next = new_node;
    }

  return (new_node);
}
