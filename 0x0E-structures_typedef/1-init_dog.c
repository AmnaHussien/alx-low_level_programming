#include "dog.h"
/**
 * init_dog -  function that initialize a variable of type struct dog
 * Description: c programm
 * @d: dog to intial
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: nothing
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
