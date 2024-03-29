#ifndef DOG_H
#define DOG_H
/**
 * struct dog - create new dog
 * @name: first member
 * @age: second member
 * @owner: third member
 * description: define a new type
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
 * dog_t - typedef for struct dog
 * description: dog_t defines a new name for struct dog
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
