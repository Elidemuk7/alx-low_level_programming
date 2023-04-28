#include <stdio.h>

void firstprint(void) __attribute__((constructor));

/**
 * firstprint - prints
 */

void firstprint(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
