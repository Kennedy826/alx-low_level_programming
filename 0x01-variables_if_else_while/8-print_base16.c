#include<stdio.h>
#include<stdlib.h>

/**
 * main - prints hexadecimal
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	char ch;

	for (a = '0'; a <= '9'; a++)
	putchar(a);

	for (ch = 'a'; ch <= 'f'; ch++)
	putchar(ch);
	putchar('\n');

	return (0);
}

