# include "dog.h"

/**
 * free_dog - Frees the memory allocated by dog
 * @d: The struct of dog
*/

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
