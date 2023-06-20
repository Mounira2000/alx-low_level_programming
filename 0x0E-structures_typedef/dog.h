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
void print_dog(struct dog *d);

/*
 * dog_t - renommer le dog_t
 */

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
