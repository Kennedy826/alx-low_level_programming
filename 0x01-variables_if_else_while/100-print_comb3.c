#include<stdio.h>
#include<stdlib.h>

/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit1 = 0;
	int digit2;

	while (digit1 < 9)
	for (digit1 = 0; digit1 < 9; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 10; digit2++)
		{
			putchar((digit1 % 10) + '0');
			putchar((digit2 % 10) + '0');

			if (digit1 == 8 && digit2 == 9)
			{
				break;
			}
			else
			{
				putchar(44);
				putchar(32);
			}
			continue;

			putchar(',');
			putchar(' ');
		}
		digit1++;
	}
	putchar('\n');
	return (0);
}
