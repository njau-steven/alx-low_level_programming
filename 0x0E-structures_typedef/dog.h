#ifndef _DOG_H_
#define _DOG_H_

/**
 * my_dog  - function to define my dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: Nothing
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
my_dog *new_dog(char *name, float age, char *owner);
void free_dog(my_dog *d);
#endif
