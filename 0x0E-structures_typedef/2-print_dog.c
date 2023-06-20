# include "dog.h"

/**
 * print_dog - A structure to print out the details of a dog
 * @d: The structure of the dog
*/

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			puts("Name: (nil)");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			puts("Owner: (nil)");
		else
			printf("Owner: %s\n", d->owner);
	}
}
