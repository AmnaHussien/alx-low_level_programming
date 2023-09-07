#include <unistd.h>
/**
 * main - Entry point
 * Description: C proram print aquote using write function
 *     ssize_t  write(int fd, cont void *buf, size_t count);
 * Return: 1 (error).
 */i
int main(void)
{
char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, quo, 59);
return (1);
}
