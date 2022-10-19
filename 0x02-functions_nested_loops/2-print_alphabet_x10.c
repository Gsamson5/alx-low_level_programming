#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	int der;
	char ka;

	for (der = 0; der <= 9; der++)
	{
		for (ka = 'a'; ka <= 'z'; ka++)
			_putchar(ka);
		_putchar('\n');
	}
}
