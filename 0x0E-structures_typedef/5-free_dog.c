#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees malloc for dog struct
 * @d: Point dog struct to freed
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
