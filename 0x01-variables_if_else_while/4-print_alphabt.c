#include <stdio.h>
#include <stdlib.h>
/**
 * main - print if the number is positive, zero, or negative
 *
 * Description: using the main function
 * this programs prints "Programming is positive, zero, or negative
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
