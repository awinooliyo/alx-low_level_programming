#ifndef DOG_H
#define DOG_H

/**
* struct dog - basic info of a dog.
* @name: the dog's name of char data type
* @age: The dog's age of float data type.
* @owner: the name of the dog's owner.
*
* Description: No description.
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
