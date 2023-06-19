#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _strlen - a function that returns the length of a string
 * @s: char input
 * Return: length of the input string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
/**
 * _strcpy - copy's string from src to dest
 * @dest: destination
 * @src: source
 * Return: pointer to char
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr_dest;

	if (dest == NULL)
		return (NULL);
	ptr_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr_dest);
}
/**
 * new_dog - creates custom type new_dog
 * @name: dog's name
 * @owner: dog's owner
 * @age: dog's age
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int len_name, len_owner;

	len_name = _strlen(name);
	len_owner = _strlen(owner);
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc(len_name + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(len_owner + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->name, name);
	_strcpy(new_dog->owner, owner);

	new_dog->age = age;

	return (new_dog);
}

