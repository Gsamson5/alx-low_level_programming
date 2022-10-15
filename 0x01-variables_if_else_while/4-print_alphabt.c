#include <stdio.h>

/**
 * main - prints lower case except q and e
 * Return: Always 0
 */
int main(void)
{
	char ka;

	for (ka = 'a'; ka <= 'z'; ka++)
	{
		if (ka != 'e' && ka != 'q')
			putchar(ka);
	}

	putchar('\n');

	return (0);
}
