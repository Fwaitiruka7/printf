#include "main.h"
#include <stdio.h>

/**
 * write- prints all characters s to stdout
 * @s: the character to print out
 */

int write(char *s)
{
	return (write(1, &s, 1));
}
