#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * set_string - function that sets the value of a pointer to a char
 * @s: string
 * @to: character
 */

void set_string(char **s, char *to)
{
	*s = to;
}

