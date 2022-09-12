#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit
 * staring frrom 0, folowed by a new line
 * Return: 0
 */
int main(void)
{
	char i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
