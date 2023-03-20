#ifndef dog_h
#define dog_h

/**
 * struct dog - information about dog
 * @name: name of dog
 * @owner: owner of dog
 * @age: dogs's age
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
