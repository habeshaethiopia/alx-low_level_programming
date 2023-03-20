#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - the function name to intialize the dog structure
 * @d: the structur
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the owner
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
