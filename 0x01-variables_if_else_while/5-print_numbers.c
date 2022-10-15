#include <stdio.h>

/**
 * main - prints single digits numbers of base 10
 * Return: Always 0
 */
int main(void)
{
	int numb;

	for (numb = 0; numb < 10; numb++)
		prntf("%d", numb);

	printf("\n");

	return (0);
}
