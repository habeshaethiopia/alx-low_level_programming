#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - function to creat new dog
 * @name: dogs name
 * @age: age of the new dog
 * @owner: Owner's name
 * Return: dog_t the new data type
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p = malloc(sizeof(dog_t));

	if (p == NULL)
		return (NULL);
	if (name == NULL)
	{
		free(p);
		free(owner);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(p);
		free(name);
		return (NULL);
	}
	p->name = name;
	p->owner = owner;
	p->age = age;
	return (p);
}
