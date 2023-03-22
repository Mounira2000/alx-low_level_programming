
/**
 * struct dog - describe a dog
 * @name: dog name
 * @age: age dog
 * @owner: owner dogs
 */

struct dog
{
        char *name;
        float age;
        char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - describbe new name
 */

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

