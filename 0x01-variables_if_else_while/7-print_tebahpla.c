#include <stdio.h>

/**
 * main - prints reverse alphabet lower case
 * Return: Always 0
 */
int main(void)
{
	char ke;

	for (ke = 'z'; ke >= 'a'; ke--)
		putchar(ke);

	putchar('\n');

	return (0);
}
