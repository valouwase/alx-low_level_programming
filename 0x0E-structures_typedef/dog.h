#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure to define dog.
 * @name: a variable to hold the name of the dog.
 * @age: a variable to hold the age.
 * @owner: a variable to hold the owner of the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG_H */
