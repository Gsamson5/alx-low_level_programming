#include "main.h"
#include <unistd.h>

/**
 * _putchar - code the character of c to stdout
 * Return: Always 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
