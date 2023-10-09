#include "main.h"
/**
 * *_realloc - allocate memory using malloc and free
 * Description: c programm
 * @ptr: pointer
 * @old_size: size in byte of allocate space for ptr
 * @new_size: size for new memory block
 * Return: null if new_size = 0, ptr != 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *pt;
unsigned int i;
if (new_size == old_size)
{
return (ptr);
}
if (new_size == 0 && ptr != 0)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
pt = malloc(new_size);
if (pt == NULL)
{
return (NULL);
}
return (pt);
}
if (new_size > old_size)
{
pt = malloc(new_size);
if (pt == NULL)
{
return (NULL);
}
for (i = 0; i < old_size && i < new_size; i++)
{
*((char *)pt + i) = *((char *)ptr + i);
}
free(ptr);
}
return (pt);
}

