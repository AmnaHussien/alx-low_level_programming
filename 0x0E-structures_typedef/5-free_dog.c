#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free the dog info
 * Description: c programm
 * @d: pointer
 * Return: nothing
 */
void free_dog(dog_t *d)
{
free(d);
}
