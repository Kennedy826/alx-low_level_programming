#include<stdio.h>
#include<stdlib.h>

/**
 * main - print single digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		printf("%d", a);
		a++;
	}
	putchar('\n');
	return (0);
}
