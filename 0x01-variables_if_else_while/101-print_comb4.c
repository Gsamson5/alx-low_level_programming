#include <stdio.h>

/**
 * main - Prints 3 combination of digit numbers
 * Return: Always
 */
int main(void)
{
	int a, i, k;

	for (a = '0'; a <= '9'; a++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				if (a < i && i < k)
				{

					putchar(a);
					putchar(i);
					putchar(k);

					if (a != '7')
					{

						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
