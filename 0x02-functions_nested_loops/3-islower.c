#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _islower - check is lower
 * @c: the number to check
 *
 * return: 1
 */
int _islower(int c)
{
	if (islower(c) == 0)
	{
		return  (0);
	}
	else
	{
		return (1);
	}
}
