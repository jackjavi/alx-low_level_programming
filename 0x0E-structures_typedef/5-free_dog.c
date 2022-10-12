#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: pointer o dogs to be freed
 */
void free_dog(dog_t *d)
{
	free(d);
}
