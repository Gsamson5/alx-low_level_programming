#include <stdio.h>

/**
 * main - prints single digit number in base 10
 * Return: Always 0
 */
int main(void)
{
	int numb;

	for (numb = 0; numb < 10; numb++)
		putchar((numb % 10) + '0');

	putchar('\n');

	return (0);
}
