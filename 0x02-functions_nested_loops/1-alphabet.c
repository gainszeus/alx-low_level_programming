#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - print a to z
 *
 * return: 0
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
