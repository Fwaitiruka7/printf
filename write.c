#include "main.h"
#include <unstd.h>

/**
 * write- prints all characters s to stdout
 * @s: the character to print out
 * Return: on success 1 and -1 in case of an error
 */

int write(char *s)
{
	char buffer[1024];
	return (write(1, &s, 1));
}
