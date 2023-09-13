#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the new dog_t struct
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

char _strcopy(char *dest, char *src)
{
	int i, len;

	len = _strlen(src);
	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);

	ndog->name = malloc(sizeof(char)len + 1);
	if (ndog->name == NULL)
	}
		free(ndog);
		return (NULL);
	}

	ndog->owner = malloc(sizeof(char)len + 1);
	if (ndog->owener == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}

	_strcopy(ndog->name, name);
	_strcopy(ndog->owner, owner);
	ndog->age = age;

	return (ndog);
}
