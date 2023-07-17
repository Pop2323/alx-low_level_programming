#ifndef DOG_H
#define DOG_H

/**
 * struct dog - new struct type named dog
 * 
 * @name: ptr to a char representing the name of the dog
 * @age: floating-point var representing the age of the dog
 * @owner: ptr to a char representing the owner's name of the dog
 * 
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
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
