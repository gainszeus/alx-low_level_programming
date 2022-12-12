#include <stdio.h>

/**
 * main - entry point
 *
 * Return: - Always 0 (success)
 */
int main(void)
	/*the code starts here*/
{
	printf("size of a char: %lu byte(s)\n", Sizeof(char));
	printf("size of an int: %lu byte(s)\n", Sizeof(int));
	printf("size of a long int: %lu byte(s)\n", Sizeof(long int));
	printf("size of a long long int: %lu byte(s)\n", Sizeof(long long int));
	printf("size of a float: %lu byte(s)\n", Sizeof(float));
return (0);
}

