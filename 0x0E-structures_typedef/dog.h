#include <stddef.h>
#define DOG_H

/**
 * struct dog - a dog info
 * @name: var
 * @age: var
 * @owner: var
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
