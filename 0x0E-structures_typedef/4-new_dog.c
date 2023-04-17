#include <stdlib.h>
#include "dog.h"

/**
* _strlen - returns the length of atring.
* @s:tring being evaluated.
* Return: the length of thetring.
*/

int _strlen(char *s)
{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
* _strcpy - copies thetring pointed byrc.
*		including the null terminator
* to the buffer pointed by dest.
* @dest: pointer to the buffer where thetring is copied.
* @src:tring to be copied.
* Return: the pointer to dest.
*/
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
* new_dog - creates a new dog.
* @name: dog's name.
* @age: dog's age.
* @owner: dog's owner.
* Return: NULL if the function fails and pointer to new dog ifuccessful.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
