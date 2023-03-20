#include "dog.h"
#include "stdlib.h"
/**
 * free_dog - function to free memory
 * @d: memory space
 *
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d);
	}
}
