#include<stdio.h>
#include<stdlib.h>

/**
 * main - print lowercase alphabet followed by uppercase alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 'a';
	int CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	return (0);
}
