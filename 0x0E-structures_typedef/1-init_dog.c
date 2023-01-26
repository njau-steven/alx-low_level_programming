#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Function that intitialize variable 
 * @d: pointer
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: always 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
