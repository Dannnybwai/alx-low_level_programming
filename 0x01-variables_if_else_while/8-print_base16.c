#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	char b;

	for (b = '0'; b <= '9'; b++)
		putchar(b);
	for (b = 'a'; b <= 'f'; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
