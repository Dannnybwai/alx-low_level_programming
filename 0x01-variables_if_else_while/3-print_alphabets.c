#include <stdio.h>
#include <stdlib.h>
/**
 * main - print alphabet
 *
 * Description: using the main function
 * Return: 0
 */
int main(void)
{
	int c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
