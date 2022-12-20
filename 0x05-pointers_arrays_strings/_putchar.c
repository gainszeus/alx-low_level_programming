#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: char to be printed
 * return: 1 if successful
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
