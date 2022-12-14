#include "main.h"
#include <stdio.h>

/**
 * main - print a to z in lower case
 *
 * return: 0 always (s
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
