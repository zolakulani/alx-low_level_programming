#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct representing a dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: This struct represents a dog and contains information about
 *              the dog's name, age, and owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
	/* Additional function prototypes */
	int _putchar(char c);
	void init_dog(struct dog *d, char *name, float age, char *owner);
	void print_dog(struct dog *d);
	dog_t *new_dog(char *name, float age, char *owner);
	void free_dog(dog_t *d);

#endif
