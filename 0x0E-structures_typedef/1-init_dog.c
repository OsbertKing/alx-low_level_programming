#include "dog.h"

/*
 * init_dog - check the code for holberton school students
 * @d : pointer
 * @name : name
 * @age : number
 * @owner : pointer
 * Return : always 0
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
