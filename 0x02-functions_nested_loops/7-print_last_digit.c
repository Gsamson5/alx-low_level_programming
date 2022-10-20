#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int rd = n % 10;

	if (rd < 0)
		rd += -1;

	_putchar(rd + '0');

	return (0);
}
