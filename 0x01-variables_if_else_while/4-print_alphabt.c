#include<stdio.h>
#include<stdlib.h>

/**
 * main - prints lowercase alphabet except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while ((ch == 'e') && (ch == 'q'))
	{
		continue;
	}
	putchar(ch);
	return (0);
}
