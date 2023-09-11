#include "dog.h"

/**
 * init_dog - will initialize the struct dog
 * @d: pointer to struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: pointer to the dog's owner's name
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
