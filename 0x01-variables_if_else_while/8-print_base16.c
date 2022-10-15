#include <stdio.h>

/**
 * main - prints digit numbers in base 16
 * Return: Always 0
 */
int main(void)
{
	int numb;
	char ka;

	for (numb = 0; numb < 10; numb++)
		putchar((numb % 10) + '0');

	for (ka = 'a'; ka <= 'f'; ka++)
		putchar(ka);

	putchar('\n');

	return (0);
}
