#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
#include <string.h>

/**
 * new_dog - function that creates a new dog
 *
 * @name: Ptr to a char representing the dog's name
 * @age:  Floating var representing the dog's age
 * @owner: Ptr to a char representing the dog owner's name
 *
 * Return: return ptr of the struct dog or NULL
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
		return (NULL);
	}
	newDog->name = (char *)malloc(strlen(name) + 1);
	newDog->owner = (char *)malloc(strlen(owner) + 1);
	if (newDog->name == NULL || newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog->owner);
		free(newDog);
		return (NULL);
	}
	strcpy(newDog->name, name);
	strcpy(newDog->owner, owner);
	newDog->age = age;
	return (newDog);
}
