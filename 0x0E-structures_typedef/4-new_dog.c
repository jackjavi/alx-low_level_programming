#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: a pointer to the newly created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	char *name_cp, *owner_cp;

	name_cp = name;
	owner_cp = owner;
	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);
	my_dog->name = name_cp;
	my_dog->age = age;
	my_dog->owner = owner_cp;
	return (my_dog);
}
