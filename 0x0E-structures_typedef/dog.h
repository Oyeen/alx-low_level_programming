#ifndef DOG
#define DOG

/**
 * struct dog - details about the dog
 *
 * @name: dog's name
 *
 * @age: dog's age
 *
 * @owner: represents the name of the dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
