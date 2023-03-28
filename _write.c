#include "main.h"
#include <unistd.h>
#define BUFSIZE 1024

/**
 * _write- prints all characters s to stdout
 * @s: the character to print out
 * Return: on success 1 and -1 in case of an error
 */

int _write(char s)
{
	return (write(1, &s, 1));
}
