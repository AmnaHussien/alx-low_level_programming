#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 * *new_dog - new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog owner
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
dog = malloc(sizeof(dog_t));
if (dog == 0)
{
return (0);
}
dog->name = name;
dog->age = age;
dog->owner = owner;
return (dog);
}
