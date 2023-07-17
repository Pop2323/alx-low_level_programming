#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
#include <string.h>

/**
 * check_len - func that checks the length of a string
 *
 * @str: char string that should be checked
 *
 * Return: return len
*/

int check_len(const char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}

/**
 * copy_str - func that returns a copy of the destination from the source
 *
 * @source: string to be copied
 * @destination: copy that is being copied to
 *
 * Return: return destination
*/

char *copy_str(char *source, char *destination)
{
	int i = 0;

	for (; source[i]; i++)
		destination[i] = source[i];
	destination[i] = '\0';
	return (destination);
}

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
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);
	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = (char *)malloc(sizeof(char) * (check_len(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = copy_str(name, dog->name);
	dog->age = age;
	dog->owner = (char *)malloc(sizeof(char) * (check_len(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->owner = copy_str(owner, dog->owner);
	return (dog);
}
