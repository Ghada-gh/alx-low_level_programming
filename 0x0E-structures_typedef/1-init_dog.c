#include <stdio.h>
/*#include "main.h"*/
#include "dog.h"

void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * init_dog - Initialize a variable of type struct dog
 * @d: The dog to initialize
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
  d->name = name;
  d->age = age;
  d->owner = owner;
}
