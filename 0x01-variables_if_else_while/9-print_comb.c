#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description:  prints all possible combinations of single-digit numbers
 * Numbers must be separated by ,, followed by a space
 * You can only use the 'putchar' function
 * You can only use 'putchar' four times maximum in your code
 * You are not allowed to use any variable of type 'char'
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
