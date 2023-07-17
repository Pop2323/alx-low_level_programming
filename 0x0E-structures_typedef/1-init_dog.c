#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d:  Ptr to a struct dog type the var to be initialized
 * @name: Ptr to a char representing the dog's name
 * @age:  Floating var representing the dog's age
 * @owner: Ptr to a char representing the dog owner's name
 *
 * Return: return void
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
