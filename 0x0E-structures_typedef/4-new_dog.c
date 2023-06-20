# include "dog.h"

/**
 * new_dog - A copy of the old dog
 * @name: The name of the new dog
 * @age: The age of the new dog
 * @owner: The owner of the new dog
 *
 * Return: The new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	char *new_name, *new_owner;

	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_name = malloc(sizeof(strlen(name)) + 1);
	new_owner = malloc(sizeof(strlen(owner)) + 1);

	if (new_name == NULL || new_owner == NULL)
	{
		free(new_dog);
		free(new_name);
		free(new_owner);
		return (NULL);
	}

	strcpy(new_owner, owner);
	strcpy(new_name, name);

	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;


	return (new_dog);
}
